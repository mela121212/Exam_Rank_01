#include <unistd.h>

void rostring(char *str)
{
    int i = 0, start = 0, end = 0, first = 1;

    while (str[i] == ' ' || str[i] == '\t') // Saltar espacios iniciales
        i++;
    start = i;
    while (str[i] && str[i] != ' ' && str[i] != '\t') // Encontrar el final del primer word
        i++;
    end = i;
    while (str[i]) 
    {
        while (str[i] == ' ' || str[i] == '\t') // Saltar espacios intermedios
            i++;
        if (str[i]) 
        {
            if (!first)
                write(1, " ", 1);
            first = 0;
            while (str[i] && str[i] != ' ' && str[i] != '\t') // Escribir word
                write(1, &str[i++], 1);
        }
    }
    if (!first)
        write(1, " ", 1);
    write(1, &str[start], end - start); // Escribir el primer word al final
}

int main(int ac, char **av)
{
    if (ac == 2)
        rostring(av[1]);
    write(1, "\n", 1);
    return (0);
}

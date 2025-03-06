#include <unistd.h>

unsigned int ft_atoi(char *str)
{
    unsigned int res = 0, i = 0;

    while (str[i] && str[i] >= '0' && str[i] <= '9')
    {
        res *= 10;
	    res += str[i] - '0';
        i++;
    }
    return(res);
}

void put_hex(int nbr)
{
    char *digits = "0123456789abcdef";
    char c;

    if (nbr >= 16)
        put_hex(nbr / 16);
    c = digits[nbr % 16];  // Guarda el dígito hexadecimal en una variable char
    write(1, &c, 1);
}

int main(int ac, char **av)
{
    if (ac == 2)
        put_hex(ft_atoi(av[1]));
    write(1, "\n", 1);
    return (0);
}
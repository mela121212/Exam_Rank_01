#include <unistd.h>

int ft_isspace(char c)
{
    if (c <= 32)
        return (1);
    return (0);
}

void capitalizer(char *s)
{
    int i = 0;
    while (s[i])
    {
         if (s[i] >= 'A' && s[i] <= 'Z')
             s[i] += 32;
         if ((s[i] >= 'a' && s[i] <= 'z') && ft_isspace(s[i + 1]))
             s[i] -= 32;
         write(1, &s[i++], 1);
    }
}

int main(int ac, char **av)
{
    int i = 1;
    if (ac == 1)
        ft_putchar('\n');
    else
    {
        while (i < ac)
        {
            capitalizer(av[i]);
            write(1, "/n", 1);
            i++;
        } 
    }
}

#include <unistd.h>

void ft_putnbr(int nbr)
{
    if (nbr >= 10)
        ft_putnbr(nbr / 10);
    char c = nbr % 10 + '0';
    write(1, &c, 1);
}

int main(int argc, char **argv)
{
    (void) argv;
    ft_putnbr(argc - 1); // -1 IMPORTANTE
    write(1, "\n", 1);
    return (0);
}

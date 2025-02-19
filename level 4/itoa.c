#include <stdlib.h>

static int get_length(int nbr)
{
    int len = (nbr <= 0) ? 1 : 0;

    while (nbr)
    {
        len++; //ANTESSSSSS
        nbr /= 10;
    }
    return (len);
}

char *ft_itoa(int nbr)
{
    int len = get_length(nbr);
    unsigned int num;
    char *str = (char *)malloc(len + 1);
    
    if (!str)
        return (NULL);
    str[len] = '\0';
    if (nbr < 0)
    {
        str[0] = '-';
        num = -nbr;
    }
    else
        num = nbr;

    while (len-- > 0)
    {
        if (str[len] == '-')
            break;
        str[len] = (num % 10) + '0';
        num /= 10;
    }
    return (str);
}

int is_valid(char c, int base)
{
    int i = 0;
    char *lowbase = "0123456789abcdef";
    char *uppcase = "0123456789ABCDEF";

    while(i <= base)
    {
        if(c == lowbase[i] || c == uppcase[i])
            return(1);
        i++;
    }
    return(0);
}

int	ft_atoi_base(const char *str, int str_base)
{
    int nbr;
    int i;
    int sign;

    while(str[i] == 9 || str[i] == 10 || str[i] == 11 || str[i] == 12 || str[i] == 13 || str[i] == 32)
        i++;
    if(str[i] == '+' || str[i] == '-')
    {
        if(str[i] == '-')
            sign = -1;
        i++;
    }
    while(str[i] && is_valid(str[i], str_base))
    {
        nbr = nbr * str_base;
        if(str[i] >= 0 && str[i] <= 9)
            nbr = nbr + str[i] - '0';
        else if(str[i] >= 'A' && str[i] <= 'Z')
            nbr = nbr + str[i] - 'A' + 10;
        else if(str[i] >= 'a' && str[i] <= 'z')
            nbr = nbr + str[i] - 'a' + 10;
        i++;
    }
    nbr = nbr * sign;
    return(nbr);
}
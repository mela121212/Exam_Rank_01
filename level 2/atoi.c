int	ft_atoi(const char *str)
{
    int i = 0;
    int nbr;
    int sign;

    while((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
        i++;
    if(str[i] == '+' || str[i] == '-')
    {
        if(str[i] == '-')
            sign = -1;
        i++;
    }
    while(str[i] && (str[i] >= '0' && str[i] <= '9'))
    {
        nbr = nbr * 10;
        nbr = nbr + str[i] - '0';
        i++;
    }
    nbr = nbr * sign;
    return(nbr);
}
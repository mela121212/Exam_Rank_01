int is_valid(char c, int baselen)
{
    int i = 0;
    char *lcbase = "0123456789abcdef";
    char *ucbase = "0123456789ABCDEF";

    while(i < baselen)
    {
        if(c == lcbase[i] || c == ucbase[i])
            return(1);
        i++;
    }
    return(0);
}


int ft_atoi_base(const char *str, int str_base)
{
    int i = 0;
    int sign = 1;
    int res = 0;

    while((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
        i++;
    if(str[i] == '+' || str[i] == '-')
    {    
        if(str[i] == '-')
            sign = -1;
        i++;
    }
    while (str[i] && isvalid(str[i], str_base))
    {
        res *= str_base;
        if (str[i] >= '0' && str[i] <= 9)
            res += str[i] - '0';
        else if (str[i] >= 'a' && str[i] <= 'f')
            res += str[i] - 'a' + 10;
        else if (str[i] >= 'A' && str[i] <= 'F')
            res += str[i] - 'A' + 10;
        i++;
    }
    return (res * sign);
}
void ft_putnbr(int nbr)
{
    char c = 0;

    if(nbr >= 10)
        ft_putnbr(nbr / 10);
    c = nbr % 10 + '0';
    write(1, &c, 1);
}

int ft_atoi(char *str)
{
    int i = 0;
    int sign = 1;
    int n = 0;

    while(str[i] == ' ')
        i++;
    if(str[i] == '+' || str[i] == '-')
    {
        if(str[i] == '-')
            sign =  -1;
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        n = n * 10;
        n = n + str[i] - '0';
        i++;
    }
    n = n * sign;
    return(n);
}

int is_prime(n)
{
    int i = 2;

    if(n < 2)
        return(0);
    while(i <= n / 2)
    {
        if(n % i == 0)
            return(0);
        i++;
    }
    return(1);
}


int main(int argc, char **argv)
{
    int n = 0;
    int sum = 0;

    n = ft_atoi(argv[1]);
    if(argc != 2 || n <= 0)
    {
        write(1, "0/n", 1);
        return(0);
    }
    while(n > 1)
    {
        if(is_prime(n))
            sum = sum + n;
        n--;
    }
    ft_putnbr(sum);
    write(1, "/n", 1);
    return(0);
}

int is_double(char *str, char c)
{
    int i = 0;

    while(str[i] != '/0')
    {
        if(str[i] == c)
            return(1);
        i++;
    }
    return(0);
}

int main(int ac, char **av)
{
    int i;

    if (ac == 3)
    {
        while(av[1][i])
        {
            if(is_double(av[1], av[1][i]) == 0)
                write(1, av[1][i], 1);
            i++;
        }
        i = 0;
        while(av[2][i])
        {
            if(is_double(av[1], av[2][i]) == 0 || is_double(av[2], av[2][i]) == 0)
                write(1, av[2][i], 1);
            i++;
        }
    }
    return(0);
}
void printhex(int n, char *base)
{
    if(n >= 16)
        printhex(n / 16, base);
    write(1, (base[n % 16], 1));
}

int main(int ac, char **av)
{
    char    *base = "0123456789abcdef";
    int i = 0;
    int n;

    if(ac == 2)
    {
        n = atoi(av[1]);
        printhex(n, base);
    }
    
}
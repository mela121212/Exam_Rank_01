int main(int ac, char **av)
{
    int i = 0;
    int flag = 0;
    
    if (ac == 2)
    {
        while(av[1][i])
        {
            if (av[1][i] <= 32)
                flag = 1;
            if((av[1][i] >= 'A' && av[1][i] <= 'Z') || (av[1][i] >= 'a' && av[1][i] <= 'z'))
            {
                if(flag == 1)
                {
                    write(1, " ", 1);
                    flag = 0;
                }
            }
            write(1, &av[1][i], 1);
            i++;
        }
    }
}
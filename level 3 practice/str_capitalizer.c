int main(int ac, char **av)
{
    int i = 0;
    int j = 0;

    if(ac > 1)
    {
        while(av[i][j])
        {
            if(av[i][j] >= 'A' && av[i][j] <= 'Z')
                av[i][j] = av[i][j] + 32;
            if(av[i][j] >= 'a' && av[i][j] <= 'z' && is_space(av[i][j - 1]))
                    av[i][j] = av[i][j] - 32; 
            j++;
        }
    }
    
}
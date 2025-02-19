int main(int ac, char **av)
{
    int temp;

    if (ac == 3)
    {
        int a = atoi(av[1]);
        int b = atoi(av[2]);
        
        if (a > 0 && b > 0) //SOLO PUEDEN SER POSTIVOS
        {
            while (b != 0)
            {
                temp = b;
                b = a % b;
                a = temp;
            }
            printf("%d", a);
        }
    }
    printf("\n");
    return(0);
}
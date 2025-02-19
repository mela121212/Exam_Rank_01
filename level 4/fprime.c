 void ft_prime(int nbr)
{
	int i = 2; //primer numero primo
	if (nbr == 1)
	{
		printf("1");
	}
	while (nbr >= i)
	{
		if (nbr % i == 0)
		{
			printf("%d", i);
			if (nbr == i)
				break;
			printf("*");
			nbr /= i;
			i = 2; //REINICIA!!
		}
        i++;
	}
}
int main (int ac, char **av)
{
	if (ac == 2)
	{
		ft_prime(atoi(av[1]));
	}
	printf("\n");
	return (0);
}








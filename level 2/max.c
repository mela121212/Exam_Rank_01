int		max(int* tab, unsigned int len)
{
    int i = 0;
    int max = tab[0];

    if (!tab)
		return (0);
    while(i < len)
    {
        if(tab[i] > max)
            max = tab[i];
        i++;
    }
    return(max);
}
int     *ft_range(int start, int end)
{
    int i = 0;
    int len = (start > end) ? (start - end) : (end - start);
    int *array = (int*)malloc(sizeof(int) * len + 1);

    while(i <= len)
    {
        while(start > end)
        {
            array[i] = start;
            start++;
            i++;
        }
        while(end > start)
        {
            array[i] = start;
            start--;
            i++;
        }
    }
    array[i] = '0';
    return(array);

}


int *ft_range(int start, int end)
{
    int i = 0;
    int len = (end - start) < 0 ? ((end - start) * -1) + 1 : (end - start) + 1;
    int *range = (int *) malloc(len * sizeof(int));
    
    while (i < len)
    {
        if (start < end)
            range[i] = start++;
        else
            range[i] = start--;
        i++;
    }
    return (range);
}
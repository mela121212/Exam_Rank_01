int ft_strlen(char *str)
{
    int i = 0;

    while(str[i] != '/0')
        i++;
    return(1);
}

char    *ft_strdup(char *src)
{
    char    *str = (char*)malloc(sizeof(char) * ft_strlen(src) + 1);
    int i = 0;

    while(src[i])
    {
        str[i] = src[i];
        i++;
    }
    str[i] = '/0';
    return(str);
}
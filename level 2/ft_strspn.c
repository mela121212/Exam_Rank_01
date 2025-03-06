size_t	ft_strspn(const char *s, const char *accept)
{
    size_t i = 0;
    int j = 0;

    while(s[i])
    {
        while(accept[j])
        {
            if(s[i] == reject[j])
                j++;;
            j++;
        }
        i++;
    }
    return(i)
} 
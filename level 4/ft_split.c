#include <stdlib.h>

int is_space(char c)
{
    return (c == ' ' || c == '\t' || c == '\n');
}

int count_words(char *str)
{
    int count = 0;
    while (*str)
    {
        while (*str && is_space(*str))
            str++;
        if (*str && !is_space(*str))
        {
            count++;
            while (*str && !is_space(*str))
                str++;
        }
    }
    return (count);
}

char *word_dup(char *str, int len)
{
    char *word = (char *)malloc(sizeof(char) * (len + 1));
    int i = 0;
    if (!word)
        return (NULL);
    while (i < len)
    {
        word[i] = str[i];
        i++;
    }
    word[i] = '\0';
    return (word);
}

char **ft_split(char *str)
{
    char **words;
    int i = 0;
    int j = 0;
    int len;

    int total_words = count_words(str);
    words = (char **)malloc(sizeof(char *) * (total_words + 1));
    if (!words)
        return (NULL);
    
    while (str[i])
    {
        while (str[i] && is_space(str[i]))
            i++;
        len = 0;
        while (str[i + len] && !is_space(str[i + len]))
            len++;
        if (len > 0)
        {
            words[j] = word_dup(str, len);
            j++;
            i += len;
        }
    }
    words[i] = NULL;
    return (words);
}


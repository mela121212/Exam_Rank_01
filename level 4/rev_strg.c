#include <unistd.h>

void rev_wstr(char *str)
{
    int end = 0, start, first = 1;

    while (str[end]) 
        end++;
    while (end >= 0)
    {
        while (end >= 0 && (str[end] == ' ' || str[end] == '\t'))
            end--;
        start = end;
        while (start >= 0 && str[start] != ' ' && str[start] != '\t')
            start--;
        if (!first)
            write(1, " ", 1);
        write(1, &str[start + 1], end - start);
        first = 0;
        end = start;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        rev_wstr(av[1]);
    write(1, "\n", 1);
    return (0);
}

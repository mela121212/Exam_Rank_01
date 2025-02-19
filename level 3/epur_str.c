#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0, flag = 0;

    if (argc == 2)
    {
        while (argv[1][i] && (argv[1][i] <= 32)) // Ignora los espacios iniciales
            i++;
        while (argv[1][i])
        {
            if (argv[1][i] > 32)
            {
                if (flag == 1)
                    write(1, " ", 1);
                while (argv[1][i] && argv[1][i] > 32)
                    write(1, &argv[1][i++], 1);
                flag = 1; 
            }
            else
                i++; 
        }
    }
    write(1, "\n", 1); 
    return (0);
}

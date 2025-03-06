#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;

    if(argc == 2)
    {
        while(argv[i] == 32 || argv[i] == 9)
            i++;
        while(argv[i] && (argv[i] != 32 || argv[i] != 9))
        {
            write(1, &argv[i], 1);
            i++;
        }
    }
    write(1, "/n", 1);
    return(0);
}
#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0, flag = 0;

    if (argc == 2)
    {
        while (argv[1][i] && (argv[1][i] <= 32))  // Ignorar los espacios iniciales
            i++;

        while (argv[1][i])
        {
            if (argv[1][i] > 32)  // Cuando encontramos una palabra (no es un espacio)
            {
                if (flag == 1)  // Si no es la primera palabra, ponemos un solo espacio antes
                    write(1, "   ", 3);
                
                // Escribir la palabra
                while (argv[1][i] && argv[1][i] > 32)
                    write(1, &argv[1][i++], 1);

                flag = 1;  // Marcamos que ya hemos encontrado una palabra
            }
            else
                i++;  // Si encontramos un espacio, avanzamos al siguiente carácter
        }
    }

    write(1, "\n", 1);  // Escribir un salto de línea al final
    return (0);
}

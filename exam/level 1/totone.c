#include <unistd.h>

int main (int argc, char **argv)
{
    int i = 0;

    if (argc == 2 && argv[1][i] >= 'a' && argv[1][i] <= 'z')
    {
        while (argv[1][i] >= 'a' && argv[1][i] <= 'z')
            {
                i++;
                write(1, &argv[1][i], 1);
            }
    }
    else
        write(1, "\n", 1);
}
#include <unistd.h>

void expand_str(char *str)
{
    int i = 0;
    while(str[i])
    {
        if (str[i] ==' ' || str[i]== '\t')
            i++;
        while(str[i] >= 32 && str[i] <= 127)
        {
            if (str[i] == ' ' || str[i] == '\t')
                write(1, "   ", 3);
            else if (str[i + 1] == ' ' || str[i + 1] == '\t')
        }
    }
}
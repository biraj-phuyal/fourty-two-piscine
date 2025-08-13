#include <stdio.h>
#include <unistd.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);
}

char *ft_strlowcase(char *str)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        i++;
    }
    return str;
}

void capitalize_last_char(char *str)
{
    int i = 0;
    int word_start = 0;
   

    while (str[i])
    {
       
        if (str[i] == ' ' || str[i] == '\t' || str[i + 1] == '\0')
        {
            int word_end = i - 1;
            if (str[i + 1] == '\0')
                word_end = i;

            
            if (word_end >= word_start && str[word_end] >= 'a' && str[word_end] <= 'z')
                str[word_end] -= 32;

            int j = word_start;
            while (j < word_end)
            {
                if (str[j] >= 'A' && str[j] <= 'Z')
                    str[j] += 32;
                j++;
            }
            word_start = i + 1;
        }
        i++;
    }
}

int main(int argc, char **argv)
{
    int i = 1;
    
   
    if (argc == 1)
    {
        write(1, "\n", 1);
        return 0;
    }

    while (i < argc)
    {
        ft_strlowcase(argv[i]);
        capitalize_last_char(argv[i]); 
        write(1, argv[i], ft_strlen(argv[i])); 
        write(1, " ", 1);
        i++;
    }

    write(1, "\n", 1);
    return 0;
}

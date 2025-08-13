#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

int main(int argc, char **argv)
{
    int i = 0;
    int a = 1;
    int b = 1;
    if (argc > 0)
    {
        while (b < argc - 1)
        {
            a = ft_strlen(argv[a]);
            ft_strlowcase(argv[b]);
            while(argv[b][i])
            {
                if(argv[b][i] == ' ' || argv[b][i] == '\t')
                {
                    if(argv[b][i - 1] >= 'a' && argv[b][i - 1] <= 'z')
                    {
                        argv[b][i] -= 32;
                        write(1, &argv[b][i], 1);
                    }
                }
                if(argv[b][i] == a - 1)
                {
                    if(argv[b][i - 1] >= 'a' && argv[b][i - 1] <= 'z')
                    {    
                        argv[b][i] -= 32;
                        write(1, &argv[b][i], 1);
                    }
                }
                write(1, &argv[b][i], 1);
                i++;
            }
            b++;
            a++;
        }
    }
    write(1, "\n", 1);
    return 0;
}
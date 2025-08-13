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

void	hidenp(char *s1, char *s2)
{
	int	i;
	int	count;
	int	j;

	i = 0;
	count = 0;
	j = ft_strlen(s1);
	if (!s1)
	{
		write(1, "0", 1);
		return ;
	}
	if (!s2)
	{
		write(1, "0", 1);
		return ;
	}
	while (s1[count] && s2[i])
	{
		if (s1[count] == s2[i])
			count++;
		i++;
	}
	if (j == count)
		write(1, "1", 1);
	write(1, "0", 1);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		hidenp(argv[1], argv[2]);
	write(1, "\n", 1);
}
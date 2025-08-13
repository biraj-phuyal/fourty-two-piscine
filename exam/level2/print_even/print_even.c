#include <stdio.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i = 0;
		while (argv[1][i])
		{
			if (argv[1][i] >= 1 && argv[1][i] <= 127)
			{
				write(1, &argv[1][i], 1);
			}
			else
			{
				write(1, &argv[1][i], 2);
			}
			i = i + 2;
		}
	}
	write(1, " ", 1);
	return (0);
}
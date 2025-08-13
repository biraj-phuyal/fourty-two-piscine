#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_hex_recursive(unsigned int n)
{
	if (n >= 16)
		print_hex_recursive(n / 16);
	ft_putchar("0123456789abcdef"[n % 16]);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		unsigned int num = 0;
		int i = 0;
		while (argv[1][i])
		{
			num = num * 10 + (argv[1][i] - '0');
			i++;
		}
		print_hex_recursive(num);
	}
	write(1, "\n", 1); 
}

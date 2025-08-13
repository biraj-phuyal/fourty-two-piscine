#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return ((int)result);
}


void	print_hex(char *num)
{
	int i = 0;

	ft_atoi(num);
	if (num < 0)
		return ;
	if (num >= '0' && num <= '9')
	{
		if (num >= 10)
			ft_putchar("0123456789abcdef"[(unsigned char)num / 16]);
		ft_putchar("0123456789abcdef"[(unsigned char)num % 16]);
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		print_hex(argv[1]);
	write(1, "\n", 1);
}
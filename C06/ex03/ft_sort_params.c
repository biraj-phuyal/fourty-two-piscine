/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biphuyal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 13:50:49 by biphuyal          #+#    #+#             */
/*   Updated: 2025/02/05 13:55:50 by biphuyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	bubblesort(int argc, char **argv)
{
	int		i;
	int		j;
	char	*temp;
	int		swap;

	i = 0;
	while (argc > i)
	{
		j = 1;
		swap = 0;
		while (j < argc - 1)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				temp = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = temp;
				swap = 1;
			}
			j++;
		}
		if (swap != 1)
			i = argc;
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	char	*a;

	i = 0;
	a = argv[0];
	bubblesort(argc, argv);
	while (i < argc)
	{
		if (argv[i] != a)
		{
			ft_putstr(argv[i]);
			write(1, "\n", 1);
		}
		i++;
	}
}

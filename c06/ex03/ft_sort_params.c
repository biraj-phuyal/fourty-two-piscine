/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphuyal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:45:30 by bphuyal           #+#    #+#             */
/*   Updated: 2024/10/08 11:56:36 by bphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write (1, str, 1);
		str++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	bubblesort(int argc, char **argv)
{
	char	*temp_str;
	int		swapped;
	int		i;
	int		j;

	i = 0;
	while (i < argc)
	{
		swapped = 0;
		j = 1;
		while (j < argc - 1)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				temp_str = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = temp_str;
				swapped = 1;
			}
			j++;
		}
		if (swapped != 1)
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

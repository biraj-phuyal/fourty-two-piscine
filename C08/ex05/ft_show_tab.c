/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biphuyal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 19:00:38 by biphuyal          #+#    #+#             */
/*   Updated: 2025/02/12 20:05:04 by biphuyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <string.h>
#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= -2147483648 || nb <= 2147483647)
	{
		if (nb == -2147483648)
		{
			write(1, "-2147483648", 11);
			return ;
		}
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
		}
		ft_putchar(nb % 10 + '0');
	}
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, &*str, 1);
		str++;
	}
}

void	ft_show_tab(struct s_stock_str *ptr)
{
	int	i;

	i = 0;
	while (ptr[i].str != NULL)
	{
		ft_putstr(ptr[i].str);
		ft_putchar('\n');
		ft_putnbr(ptr[i].size);
		ft_putchar('\n');
		ft_putstr(ptr[i].copy);
		ft_putchar('\n');
		i++;
	}
}
/* 
#include "ft_stock_str.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
    struct s_stock_str *tab;
    int i;

    // Create the tab from the arguments
    tab = ft_strs_to_tab(argc, argv);
    if (tab == NULL)
    {
        write(1, "Memory allocation failed.\n", 25);
        return (1);
    }

    // Show the content of the tab
    ft_show_tab(tab);

    // Free the allocated memory for str and copy
    for (i = 0; i < argc; i++)
    {
        free(tab[i].str);
        free(tab[i].copy);
    }
    free(tab);

    return (0);
} */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biphuyal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 18:17:16 by biphuyal          #+#    #+#             */
/*   Updated: 2025/01/31 20:51:07 by biphuyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str >= 32 && *str <= 127)
			ft_putchar(*str);
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[(unsigned char)*str / 16]);
			ft_putchar("0123456789abcdef"[(unsigned char)*str % 16]);
		}
		str++;
	}
}

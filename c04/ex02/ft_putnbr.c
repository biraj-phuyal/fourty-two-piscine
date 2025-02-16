/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphuyal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:38:09 by bphuyal           #+#    #+#             */
/*   Updated: 2024/10/01 18:37:04 by bphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	digits;

	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return;
	}
	if (nb < 0)
	{
		write (1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	digits = '0' + (nb % 10);
	write (1, &digits, 1);

}

int	main()
{
	int nb = -897543; 
	ft_putnbr(nb);
}

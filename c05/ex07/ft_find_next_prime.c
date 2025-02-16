/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphuyal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 22:36:08 by bphuyal           #+#    #+#             */
/*   Updated: 2024/10/07 11:55:27 by bphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	num;

	i = 2;
	num = 0;
	if (nb <= 0)
		return (0);
	while (nb % i != 0)
		i++;
	if (i == nb)
		return (1);
	else
		return (0);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
/*
int main()
{
	int g = 9;
	printf("%i", ft_find_next_prime(g));
}
*/

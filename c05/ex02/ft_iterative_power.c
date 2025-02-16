/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphuyal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 22:27:56 by bphuyal           #+#    #+#             */
/*   Updated: 2024/10/06 22:28:31 by bphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	i = 0;
	result = 1;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (i < power)
	{
		result = result * nb;
		i++;
	}
	return (result);
}
/*
int main()
{
	printf("2^3 = %d\n", ft_iterative_power(2, 3));
    	printf("5^0 = %d\n", ft_iterative_power(5, 0));
    	printf("3^(-2) = %d\n", ft_iterative_power(3, -2));

    	return 0;
}*/

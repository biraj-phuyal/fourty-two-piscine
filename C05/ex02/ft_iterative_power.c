/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biphuyal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 22:09:19 by biphuyal          #+#    #+#             */
/*   Updated: 2025/02/04 18:26:58 by biphuyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > i)
	{
		result *= nb;
		i++;
	}
	return (result);
}
/* 
int	main(void)
{
	int num;
	int result;
	int power = 2;

	num = 5;
	result = ft_iterative_power(num, power);
	printf("Power of %d is: %d\n", num, result);
	return (0);
} */
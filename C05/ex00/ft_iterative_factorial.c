/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biphuyal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 22:09:27 by biphuyal          #+#    #+#             */
/*   Updated: 2025/02/02 22:09:28 by biphuyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (nb >= 1)
	{
		i *= nb;
		nb--;
	}
	return (i);
}
/* 
int	main(void)
{
	int	num;
	int	result;

	num = 5;
	result = ft_iterative_factorial(num);
	printf("Factorial of %d is: %d\n", num, result);
	return (0);
} */

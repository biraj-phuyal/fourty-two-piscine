/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphuyal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 20:47:50 by bphuyal           #+#    #+#             */
/*   Updated: 2024/10/06 22:26:40 by bphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	result = 1;
	i = 1;
	if (nb == 0 || nb == 1)
		return (1);
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
/*
int main()
{
        int nb = 5;
        ft_iterative_factorial(nb);
        printf("%i", nb);
        return 0;
}
*/

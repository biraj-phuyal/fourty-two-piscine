/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphuyal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 20:38:59 by bphuyal           #+#    #+#             */
/*   Updated: 2024/10/07 11:37:23 by bphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	fibonacci(int before_last, int last, int index)
{
	if (index == 0)
		return (before_last);
	if (index == 1)
		return (last);
	return (fibonacci(last, before_last + last, index - 1));
}

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	return (fibonacci(0, 1, index));
}
/*
int main()
{
	int index = 3;
	ft_fibonacci(index);
	printf("%i", index);
}
*/

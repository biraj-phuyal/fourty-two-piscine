/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biphuyal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 22:09:03 by biphuyal          #+#    #+#             */
/*   Updated: 2025/02/08 17:34:28 by biphuyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;
	int	num;

	i = 1;
	num = 0;
	while (nb > 0)
	{
		nb = nb - i;
		i = i + 2;
		num++;
	}
	if (nb == 0)
		return (num);
	else
		return (0);
}
/* 
int	main(void)
{
	int i = 49;
	int a = ft_sqrt(i);
	printf("%d", a);
} */
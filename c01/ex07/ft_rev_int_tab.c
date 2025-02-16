/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphuyal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:59:53 by bphuyal           #+#    #+#             */
/*   Updated: 2024/09/25 21:38:14 by bphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;

	int	i = 0;

	while (i > size / 2)
	{
		tab[i] = temp;
		tab[i] = (size -1 -i);
		tab[size -1 -i] = temp;
		i++;
	}
}

int main()
{
	int a[4];

	a[0] = 4;
	a[1] = 3;
	a[2] = 2;
	a[3] = 1;
	int b = &a;
	ft_rev_int_tab(a, 4);
	printf("%d", b);
}
/*
int i = 0;
	while (i < size)
	{
		printf("%d", a);
	}
*/

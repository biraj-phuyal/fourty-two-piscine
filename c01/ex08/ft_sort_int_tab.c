/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphuyal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 22:10:35 by bphuyal           #+#    #+#             */
/*   Updated: 2024/09/26 11:31:14 by bphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int a;
	
	int temp;

	int i;
	
	i = 0;
	a = 0;
	while (a == 0)
	{
		if (a < size -1)
		++a;
		while(i == 0)
		{
			if (i < size - a -1)
			++i;

				if (tab[i] > tab[i + 1])

					temp = tab[i + 1];
					tab[i] = temp;
		}

	}
}

int main()
{
        int a[4];

        a[0] = 4;
        a[1] = 3;
        a[2] = 2;
        a[3] = 1;
        ft_rev_int_tab(a, 4);
}


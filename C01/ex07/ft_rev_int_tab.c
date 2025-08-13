/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biphuyal <biphuyal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 16:35:46 by biphuyal          #+#    #+#             */
/*   Updated: 2025/01/27 22:27:55 by biphuyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	a;
	int	r;

	i = 0;
	a = size - 1;
	while (i < a)
	{
		r = tab[i];
		tab[i] = tab[a];
		tab[a] = r;
		i++;
		a--;
	}
}
/*
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    
    ft_rev_int_tab(arr, size);
    
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
*/

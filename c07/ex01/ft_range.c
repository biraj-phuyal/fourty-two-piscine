/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphuyal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 18:30:52 by bphuyal           #+#    #+#             */
/*   Updated: 2024/10/10 13:03:44 by bphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*array;
	int	size;

	if (min >= max)
		return (NULL);
	size = max - min;
	array = malloc(size * sizeof(int));
	i = 0;
	if (array == NULL)
		return (NULL);
	while (i < size)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}

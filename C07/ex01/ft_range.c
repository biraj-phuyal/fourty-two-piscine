/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biphuyal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 17:02:54 by biphuyal          #+#    #+#             */
/*   Updated: 2025/02/09 20:07:09 by biphuyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
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
/* 
int main(void)
{
    int min = 5;
    int max = 10;
    int *array = ft_range(min, max);
    
    if (array != NULL)
    {
        for (int i = 0; i < max - min; i++)
        {
            printf("%d ", array[i]);
        }
        printf("\n");
        
        free(array);  // Don't forget to free the memory
    }
    else
    {
        printf("Error: Invalid range\n");
    }

    return 0;
} */

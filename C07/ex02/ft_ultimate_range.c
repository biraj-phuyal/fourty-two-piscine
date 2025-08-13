/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biphuyal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 17:56:20 by biphuyal          #+#    #+#             */
/*   Updated: 2025/02/09 20:44:44 by biphuyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc((max - min) * sizeof(int *));
	if (*range == NULL)
		return (-1);
	i = 0;
	size = max - min;
	while (i < size)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (size);
}
/* 
int main(void)
{
    int min = 3;
    int max = 10;
    int *range = NULL;
    int size, i;

    size = ft_ultimate_range(&range, min, max);

    if (size == -1)
    {
        printf("Error: Memory allocation failed.\n");
        return 1;
    }
    else if (size == 0)
    {
        printf("No valid range (min >= max).\n");
    }
    else
    {
        printf("Range from %d to %d:\n", min, max - 1);
        for (i = 0; i < size; i++)
        {
            printf("%d ", range[i]);
        }
        printf("\n");

        free(range);  // Free the allocated memory after use
    }

    return 0;
}  */

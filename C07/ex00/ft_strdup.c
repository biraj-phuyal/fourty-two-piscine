/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biphuyal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 17:03:01 by biphuyal          #+#    #+#             */
/*   Updated: 2025/02/09 20:04:10 by biphuyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*new;
	int		i;

	i = 0;
	new = malloc((ft_strlen(src) + 1) * sizeof(char));
	if (new == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
/* 
int	main(void)
{
	char	*original = "Hello, world!";
	char	*duplicated;

	printf("Length of the string: %d\n", ft_strlen(original));
	
	duplicated = ft_strdup(original);
	if (duplicated != NULL)
	{
		printf("Duplicated string: %s\n", duplicated);
		free(duplicated); 
	}
	else
	{
		printf("Memory allocation failed for strdup\n");
	}
	return (0);
} */

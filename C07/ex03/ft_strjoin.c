/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biphuyal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 15:15:07 by biphuyal          #+#    #+#             */
/*   Updated: 2025/02/09 20:46:31 by biphuyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

int	ft_length(char **strs, char *sep, int size)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len = len + ft_strlen(strs[i]);
		if (i < size - 1)
			len = len + ft_strlen(sep);
		i++;
	}
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	if (dest[i] == '\0')
	{
		while (src[j] != '\0')
		{
			dest[i + j] = src[j];
			j++;
		}
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;

	if (size == 0)
	{
		dest = malloc(1 * sizeof(char));
		if (dest)
			dest[0] = '\0';
		return (dest);
	}
	dest = malloc((ft_length(strs, sep, size) + 1) * sizeof(char));
	if (dest == 0)
		return (0);
	i = 0;
	dest[0] = '\0';
	while (i < size)
	{
		ft_strcat(dest, strs[i]);
		if (i < size - 1)
			ft_strcat(dest, sep);
		i++;
	}
	return (dest);
}
/* 
int	main(void)
{
	// Sample input
	char *strings[] = {"Hello", "world", "this", "is", "a", "test"};
	int size = 6;
	char *separator = " "; // Space separator

	// Join strings with the separator
	char *result = ft_strjoin(size, strings, separator);

	// Print the resulting string
	printf("Resulting string: '%s'\n", result);

	// Free allocated memory
	free(result);

	return (0);
} */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biphuyal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 12:26:49 by biphuyal          #+#    #+#             */
/*   Updated: 2025/02/01 16:26:28 by biphuyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	src_len;
	unsigned int	dest_len;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	dest_len = i;
	src_len = ft_strlen(src);
	if (size == 0 || size <= dest_len)
		return (src_len + size);
	while (src[j] && (dest_len + j) < (size - 1))
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (src_len + dest_len);
}
/* 
int main()
{
	char dest[50] = "Hello, ";
	char src[] = "world!";
	unsigned int size = 20;

	printf("Before strlcat: %s\n", dest);
	unsigned int result = ft_strlcat(dest, src, size);
	printf("After strlcat: %s\n", dest);
	printf("Returned value: %u\n", result);

	return 0;
} */
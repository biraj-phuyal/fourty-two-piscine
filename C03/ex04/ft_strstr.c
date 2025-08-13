/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biphuyal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 12:26:45 by biphuyal          #+#    #+#             */
/*   Updated: 2025/02/01 14:40:44 by biphuyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*haystack;
	char	*needle;

	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		haystack = str;
		needle = to_find;
		while (*haystack == *needle && *haystack && *needle)
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
			return (str);
		str++;
	}
	return (NULL);
}
/* 
int	main(void)
{
	char *haystack = "Hello World";
	char *needle = "W";

	char *a = ft_strstr(haystack, needle);
	printf("%s", a);
} */
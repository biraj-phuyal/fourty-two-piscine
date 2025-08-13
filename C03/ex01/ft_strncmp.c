/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biphuyal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 12:26:34 by biphuyal          #+#    #+#             */
/*   Updated: 2025/02/01 14:41:32 by biphuyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}
/* 
int	main(void)
{
	char *s1 = "Vammoossss";
	char *s2 = "Vamoooosss";
	unsigned int n = 6;

	int a = ft_strncmp(s1, s2, n);
	printf("%d", a);
} */
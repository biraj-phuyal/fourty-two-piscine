/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biphuyal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 12:26:31 by biphuyal          #+#    #+#             */
/*   Updated: 2025/02/01 16:28:55 by biphuyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/* 
int	main(void)
{
	char *s1 = "Vammoossss";
	char *s2 = "Vamoooosss";

	int a = ft_strncmp(s1, s2);
	printf("%d", a);
} */
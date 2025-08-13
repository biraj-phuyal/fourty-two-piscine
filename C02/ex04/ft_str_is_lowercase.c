/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biphuyal <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 15:47:10 by biphuyal          #+#    #+#             */
/*   Updated: 2025/01/28 15:47:11 by biphuyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (!(*str >= 'a' && *str <= 'z'))
			return (0);
		else
			str++;
	}
	return (1);
}
/*
int	main(void)
{
	int	i;

	char b[]= "good1";
	i = ft_str_is_lowercase(b);
	printf("%d", i);
}
*/
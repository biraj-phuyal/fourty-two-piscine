/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: <biphuyal <marvin@42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 15:46:09 by biphuyal          #+#    #+#             */
/*   Updated: 2025/01/28 15:46:10 by biphuyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (!(*str >= 'A' && *str <= 'Z'))
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
	i = ft_str_is_uppercase(b);
	printf("%d", i);
}
*/
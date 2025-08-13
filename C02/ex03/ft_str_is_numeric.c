/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biphuyal <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 15:47:14 by biphuyal          #+#    #+#             */
/*   Updated: 2025/01/28 15:47:15 by biphuyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (!(*str >= '0' && *str <= '9'))
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
	i = ft_str_is_numeric(b);
	printf("%d", i);
}
*/
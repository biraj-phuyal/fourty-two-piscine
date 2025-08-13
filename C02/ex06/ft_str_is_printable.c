/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biphuyal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 17:51:07 by biphuyal          #+#    #+#             */
/*   Updated: 2025/01/29 22:51:10 by biphuyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (!(*str >= 32 && *str <= 127))
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
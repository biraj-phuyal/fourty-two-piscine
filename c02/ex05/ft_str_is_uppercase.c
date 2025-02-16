/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphuyal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 20:50:10 by bphuyal           #+#    #+#             */
/*   Updated: 2024/09/28 21:06:36 by bphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (!(*str > 'A' && *str < 'Z'))
		{
			return (0);
		}
		else
		{
			str++;
		}
	}
	return (1);
}
/*
int main()
{
        char b[]= "H1HHHH";
        int i = ft_str_is_uppercase(b);
        printf("%d", i);
}
*/

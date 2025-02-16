/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphuyal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 20:45:17 by bphuyal           #+#    #+#             */
/*   Updated: 2024/09/28 21:05:12 by bphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (!(*str > 'a' && *str < 'z'))
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
        char b[]= "kbnsdbfkbs";
        int i = ft_str_is_lowercase(b);
        printf("%d", i);
}
*/

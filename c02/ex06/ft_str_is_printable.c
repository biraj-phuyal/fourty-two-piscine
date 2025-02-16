/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphuyal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 20:53:00 by bphuyal           #+#    #+#             */
/*   Updated: 2024/09/28 21:11:21 by bphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (!(*str >= 32 && *str <= 126))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*
int	main()
{
        char b[]= "Hello\x07World\x01\x02\nGoodbye\x1B[31mColored";
        int i = ft_str_is_printable(b);
        printf("%d", i);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biphuyal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 17:27:19 by biphuyal          #+#    #+#             */
/*   Updated: 2025/02/05 22:11:06 by biphuyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i])
	{
		if (('a' <= str[i] && str[i] <= 'z') && (i == 0))
			str[i] -= 32;
		else if (('a' <= str[i] && str[i] <= 'z') && !('a' <= str[i - 1]
				&& str[i - 1] <= 'z') && !('A' <= str[i - 1] && str[i
					- 1] <= 'Z') && !('0' <= str[i - 1] && str[i - 1] <= '9'))
			str[i] -= 32;
		i++;
	}
	return (str);
}
/* 
int	main(void)
{
	char teste[] = 
	"salut,comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s\n", ft_strcapitalize(teste));
	return (0);
} */

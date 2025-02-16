/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphuyal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 13:53:55 by bphuyal           #+#    #+#             */
/*   Updated: 2024/09/28 21:16:06 by bphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (*src)
		{
			*dest = *src;
			src++;
		}
		else
		{
			*dest = '\0';
		}
		dest++;
		i++;
	}
	return (dest);
}
/*
int main() {
    char src[] = "Hello";

    char dest[10];
    
    ft_strncpy(dest, src, 4);

    printf("%s\n",dest);

    return 0;
}
*/

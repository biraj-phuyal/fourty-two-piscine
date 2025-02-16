/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphuyal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 20:40:02 by bphuyal           #+#    #+#             */
/*   Updated: 2024/10/10 14:16:10 by bphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*new;
	int		i;

	i = 0;
	new = malloc((ft_strlen(src) + 1) * sizeof(char));
	if (new == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
/*
int	main(int argc, char **argv)
{
	if (argc > 3)
	{
		printf("Fuck you put more then two argumet bitch");  
	}
	char *src = argv[1];
	char *new = ft_strdup(src);

	printf("Source -> %s\nDuplicated source -> %s\n", src, new);
	free(new);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biphuyal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 18:57:44 by biphuyal          #+#    #+#             */
/*   Updated: 2025/02/12 20:04:43 by biphuyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
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

struct s_stock_str	*ft_strs_to_tab(int argc, char **argv)
{
	struct s_stock_str	*ptr;
	int					i;

	i = 0;
	ptr = (t_stock_str *)malloc(sizeof(t_stock_str) * (argc + 1));
	if (!ptr)
		return (NULL);
	while (i < argc)
	{
		if (argv[i] == NULL)
			return (NULL);
		ptr[i].size = ft_strlen(argv[i]);
		ptr[i].str = ft_strdup(argv[i]);
		ptr[i].copy = ft_strdup(argv[i]);
		if (ptr[i].str == NULL || ptr[i].copy == NULL)
			return (NULL);
		i++;
	}
	ptr[i].str = NULL;
	return (ptr);
}
/* 
int	main(int argc, char **argv)
{
    struct s_stock_str *tab;
    int i;

    tab = ft_strs_to_tab(argc, argv);
    if (tab == NULL)
    {
        printf("Memory allocation failed.\n");
        return (1);
    }

    // Print the values to test the result
    for (i = 0; i < argc; i++)
    {
        printf("str: %s\n", tab[i].str);
        printf("copy: %s\n", tab[i].copy);
        printf("size: %d\n", tab[i].size);
    }

    // Free allocated memory
    for (i = 0; i < argc; i++)
    {
        free(tab[i].str);
        free(tab[i].copy);
    }
    free(tab);

    return (0);
} */

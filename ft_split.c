/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarbe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:37:13 by sbarbe            #+#    #+#             */
/*   Updated: 2023/10/09 12:40:54 by sbarbe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_stdup(char const *src, int start, int end)
{
	char	*dest;
	int		i;

	i = 0;
	dest = malloc(sizeof(char) * (end - start + 1));
	if (dest == NULL)
		return (NULL);
	while (start + i < end)
	{
		dest[i] = src[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static int	nbr(const char *str, char c)
{
	size_t	i;
	int		k;

	i = 0;
	k = 0;
	while (str[i])
	{
		while (str[i] == c && str[i])
			i++;
		if (str[i])
		{
			k++;
			while (str[i] != c && str[i])
				i++;
		}
	}
	return (k);
}

char	**ft_split(const char *str, char c)
{
	char	**tab;
	int		i;
	int		start;
	int		k;

	tab = malloc(sizeof(char *) * (nbr(str, c) + 1));
	if (!tab)
		return (NULL);
	i = 0;
	k = 0;
	while (str[i])
	{
		while (str[i] == c && str[i])
			i++;
		start = i;
		while (str[i] != c && str[i])
			i++;
		if (i != start)
		{
			tab[k] = ft_stdup(str, start, i);
			k++;
		}
	}
	tab[k] = 0;
	return (tab);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarbe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 08:58:40 by sbarbe            #+#    #+#             */
/*   Updated: 2023/10/05 11:33:31 by sbarbe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*pts;

	i = 0;
	pts = 0;
	while (s[i])
		i++;
	if (!c)
		return (((char *)s) + i);
	i = -1;
	while (((char *)s)[++i])
	{
		if (((char *)s)[i] == (char) c)
		{
			pts = ((char *)s) + i;
		}
	}
	return (pts);
}

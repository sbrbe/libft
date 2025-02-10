/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarbe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:32:32 by sbarbe            #+#    #+#             */
/*   Updated: 2023/10/12 11:25:50 by sbarbe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	if (!c)
		return (((char *)s) + ft_strlen(s));
	i = -1;
	while (((char *)s)[++i])
		if (((char *)s)[i] == (char) c)
			return (((char *)s) + i);
	return (NULL);
}

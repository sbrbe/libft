/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarbe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:31:53 by sbarbe            #+#    #+#             */
/*   Updated: 2023/10/05 13:04:06 by sbarbe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len(const char *dst)
{
	size_t	i;

	i = 0;
	while (dst[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*dest_p;
	const char	*src_p;
	size_t		n;
	size_t		len_dst;

	dest_p = dst;
	src_p = src;
	n = size;
	while (n-- != 0 && *dest_p)
		dest_p++;
	len_dst = dest_p - dst;
	n = size - len_dst;
	if (n == 0)
		return (len_dst + ft_len(src_p));
	while (*src_p)
	{
		if (n != 1)
		{
			*dest_p++ = *src_p;
			n--;
		}
		src_p++;
	}
	*dest_p = '\0';
	return (len_dst + (src_p - src));
}

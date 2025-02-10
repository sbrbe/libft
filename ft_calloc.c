/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarbe <sbarbe@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:38:34 by sbarbe            #+#    #+#             */
/*   Updated: 2023/10/12 10:15:52 by sbarbe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	tmp;
	void	*ar;

	tmp = nmemb * size;
	if (!nmemb || !size)
		return (malloc(1));
	if (tmp / size != nmemb)
		return (0);
	ar = malloc(tmp);
	if (ar)
	{
		while (tmp > 0)
		{
			((char *)ar)[tmp - 1] = '\0';
			tmp--;
		}
	}
	return (ar);
}

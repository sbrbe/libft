/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarbe <sbarbe@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:26:10 by sbarbe            #+#    #+#             */
/*   Updated: 2023/10/12 10:53:09 by sbarbe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ici;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		ici = malloc(sizeof(char) * (ft_strlen(s + start) + 1));
	else
		ici = malloc(sizeof(char) * (len + 1));
	if (!ici)
		return (NULL);
	i = 0;
	while (i < len && s[start])
		ici[i++] = s[start++];
	ici[i] = '\0';
	return (ici);
}

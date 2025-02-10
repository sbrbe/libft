/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarbe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 08:42:31 by sbarbe            #+#    #+#             */
/*   Updated: 2023/10/10 09:11:49 by sbarbe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*fr;
	size_t	len;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	fr = malloc((len + 1) * sizeof(char));
	if (!fr)
		return (NULL);
	fr[len] = '\0';
	while (s[i] != '\0')
	{
		fr[i] = (*f)((unsigned int)i, s[i]);
		i++;
	}
	return (fr);
}

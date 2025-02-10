/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbarbe <sbarbe@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:42:49 by sbarbe            #+#    #+#             */
/*   Updated: 2023/10/12 13:28:42 by sbarbe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*dest;
	int		i;
	int		nb;

	nb = n;
	i = 1;
	while ((nb < 0 || nb > 9) && i++ < 14)
		nb = nb / 10;
	dest = malloc(sizeof(char) * (i + 1));
	if (!dest)
		return (NULL);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	dest[0] = '-';
	dest[i--] = '\0';
	if (n == 0)
		dest[i--] = 0 + 48;
	while (n != 0)
	{
		if (n < 0)
			n = n * -1;
		dest[i--] = n % 10 + '0';
		n = n / 10;
	}
	return (dest);
}

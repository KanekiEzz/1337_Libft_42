/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iezzam <iezzam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 09:22:53 by iezzam            #+#    #+#             */
/*   Updated: 2024/10/29 00:02:42 by iezzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int				i;
	unsigned char	*destt;
	unsigned char	*srcc;

	if (!dest && !src)
		return (NULL);
	if (n == 0)
		return (dest);
	destt = (unsigned char *)dest;
	srcc = (unsigned char *)src;
	i = 0;
	while (n--)
	{
		destt[i] = srcc[i];
		i++;
	}
	return (dest);
}

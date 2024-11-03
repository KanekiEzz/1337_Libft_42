/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iezzam <iezzam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 18:28:38 by iezzam            #+#    #+#             */
/*   Updated: 2024/11/02 15:01:58 by iezzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	size_t	l_dest;
	size_t	l_src;

	if (destsize == 0)
		return (ft_strlen(src));
	l_src = ft_strlen(src);
	l_dest = ft_strlen(dest);
	if (destsize == 0 || l_dest >= destsize)
		return (l_src + destsize);
	i = 0;
	while (src[i] && (l_dest + i < destsize - 1))
	{
		dest[l_dest + i] = src[i];
		i++;
	}
	dest[l_dest + i] = '\0';
	return (l_dest + l_src);
}

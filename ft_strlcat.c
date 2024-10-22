/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iezzam <iezzam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 18:28:38 by iezzam            #+#    #+#             */
/*   Updated: 2024/10/22 22:45:50 by iezzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	size_t	l_dest;
	size_t	l_src;

	i = 0;
	l_src = ft_strlen(src);
	l_dest = ft_strlen(dest);
	if (destsize == 0 || l_dest >= destsize)
		return (l_src + destsize);
	while (src[i] && (l_dest + i < destsize - 1))
	{
		dest[l_dest + i] = src[i];
		i++;
	}
	dest[l_dest + i] = '\0';
	return (l_dest + l_src);
}

// int	main(void)
// {
// 	char	dest[10] = "a";

// 	printf("ft_strlcat %zu\n", ft_strlcat(dest, "lorem ipsum dolor sit amet",
// 			0));
// 	printf("strlcat %zu\n", strlcat(dest, "lorem ipsum dolor sit amet", 0));
// 	return (0);
// }

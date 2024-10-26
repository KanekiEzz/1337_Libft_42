/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iezzam <iezzam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 09:22:53 by iezzam            #+#    #+#             */
/*   Updated: 2024/10/26 12:24:38 by iezzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*destt;
	unsigned char	*srcc;

	if (!dest && !src)
		return (NULL);
	if (n == 0)
		return (dest);
	destt = (unsigned char *)dest;
	srcc = (unsigned char *)src;
	while (n--)
		*(destt++) = *(srcc++);
	return (dest);
}

// int	main(void)
// {
// 	char	src[40] = "0123456789";
// 	char	src1[40] = "0123456789";
// 	char	src2[40] = "0123456789";

// 	ft_memcpy(src + 3, src, 7);
// 	printf("ft: 	%s\n", src);
// 	memcpy(src1 + 3, src1, 7);
// 	printf("memcpy: %s\n", src1);
// 	memmove(src2 + 3, src2, 7);
// 	printf("memove: %s\n", src2);
// 	ft_memmove(src2 + 3, src2, 7);
// 	printf("ft_memove: %s", src2);
// 	return (0);
// }

// int	main(void)
// {
// 	int src = 123;
// 	int dest[20] = {0};

// 	ft_memcpy(dest, &src, sizeof(src));

// 	printf("%d\n", dest[0]);

// 	return (0);
// }
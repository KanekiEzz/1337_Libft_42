/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iezzam <iezzam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 09:53:07 by iezzam            #+#    #+#             */
/*   Updated: 2024/10/22 12:52:09 by iezzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (s < d && d < s + len)
	{
		while (len-- > 0)
			*(d + len) = *(s + len);
	}
	else
		ft_memcpy(dest, src, len);
	return (dest);
}

// int	main(void)
// {
// 	char	src[] = "kaneki ken";
// 	char	dst[] = "zzzz";
// 	int		i;

// 	ft_memmove(dst, src, 3);
// 	i = 0;
// 	while (i < 3)
// 		printf("%c", src[i++]);

//     printf("\n");
//     memcpy(dst, src, 3);
// 	i = 0;
// 	while (i < 3)
// 		printf("%c", src[i++]);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iezzam <iezzam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 09:22:53 by iezzam            #+#    #+#             */
/*   Updated: 2024/10/22 09:51:11 by iezzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*destt;
	unsigned char	*srcc;

	destt = (unsigned char *)dest;
	srcc = (unsigned char *)src;
	while (n--)
		*(destt++) = *(srcc++);
	return (dest);
}

// int main() {
//     char src[] = "Hello, World!";
//     char dest[20];

//     ft_memcpy(dest, src, 9);
//     dest[13] = '\0';
//     printf("%s", dest);

//     return (0);
// }

// int	main(void)
// {
// 	int src = 123;
// 	int dest[20] = {0};

// 	ft_memcpy(dest, &src, sizeof(src));

// 	printf("%d\n", dest[0]);

// 	return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iezzam <iezzam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 09:22:53 by iezzam            #+#    #+#             */
/*   Updated: 2024/10/22 09:29:39 by iezzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *destt = (unsigned char *)dest;
    unsigned char *srcc = (unsigned char *)src;

    while (n--)
        *(destt++) = *(srcc++);
    return dest;
}

int main() {
    char src[] = "Hello, World!";
    char dest[20];

    ft_memcpy(dest, src, 13);
    dest[13] = '\0';

    return 0;
}
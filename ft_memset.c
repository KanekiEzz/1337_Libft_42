/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iezzam <iezzam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:23:45 by iezzam            #+#    #+#             */
/*   Updated: 2024/10/21 17:23:46 by iezzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *ptr, int`
 c, size_t len)
{
    unsigned char *str = (unsigned char *)ptr;
    size_t i;

    i = 0;
    while (i < len)
        str[i++] = (unsigned char)c;
    return ptr;
}
int main()
{
    int nb = 12;
    nb = 0;
    ft_memset(&nb, 1, 4);

    printf("After memset():  %d", nb);
    return 0;
}
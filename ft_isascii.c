/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iezzam <iezzam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:23:22 by iezzam            #+#    #+#             */
/*   Updated: 2024/10/21 17:51:48 by iezzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isascii(int c)
{
    return (c >= 0 && c <= 127);
}

// int main ()
// {
//     printf("%d\n", ft_isascii('0x7c'));
//     printf("%d\n", isascii('0x7c'));

//     printf("%d\n", ft_isascii('\n'));
//     printf("%d\n", isascii('\n'));
// }
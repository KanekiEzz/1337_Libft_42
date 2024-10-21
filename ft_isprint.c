/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iezzam <iezzam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:23:39 by iezzam            #+#    #+#             */
/*   Updated: 2024/10/21 17:51:55 by iezzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isprint(int c)
{
    return (c >= 32 && c <= 126);
}

// int main ()
// {
//     printf("%d\n", isprint('\n'));
//     printf("%d\n", ft_isprint('\n'));

//         printf("%d\n", isprint('q'));
//     printf("%d\n", ft_isprint('q'));
// }
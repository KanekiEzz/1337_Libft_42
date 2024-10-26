/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iezzam <iezzam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:23:54 by iezzam            #+#    #+#             */
/*   Updated: 2024/10/26 09:09:22 by iezzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i++] != '\0')
		;
	return (--i);
}

// int main ()
// {
//     char *str = NULL;
//     printf("%zu\n", ft_strlen(str));
//     printf("%zu\n", strlen(str));
// }
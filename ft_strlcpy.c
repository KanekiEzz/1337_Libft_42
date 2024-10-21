/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iezzam <iezzam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 18:06:47 by iezzam            #+#    #+#             */
/*   Updated: 2024/10/21 21:22:15 by iezzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	int i;
	if (destsize == 0)
		return (ft_strlen(src));

	i = 0;
	while (src[i] != '\0' && i < destsize - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return ft_strlen(src);
}

// int main ()
// {
//     char k[] = "kaneki";
//     char l[200] = "m";
//     int i = (int)ft_strlcpy(l, k, 4);
//     printf("%s\n", l);
//     printf("%d\n", i);
// }

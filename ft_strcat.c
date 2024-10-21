/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iezzam <iezzam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 18:28:38 by iezzam            #+#    #+#             */
/*   Updated: 2024/10/21 20:39:23 by iezzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	int		i;
	size_t	l_dest;
	size_t	l_src;

	i = 0;
	l_src = ft_strlen(src);
	l_dest = ft_strlen(dest);
	if (l_dest > destsize)
		return (l_dest);
	while (dest[i] && (i < destsize - 1))
	{
		dest[l_dest + i] = src[i];
		i++;
	}
	return (l_dest + l_src);
}
// int	main(void)
// {
// 	char		dest[20] = "Hello";
// 	const char	*src = "world!";
// 	size_t		result;

// 	result = ft_strlcat(dest, src, sizeof(dest));
// 	printf("Resulting string: %s\n", dest);
// 	printf("Total length: %zu\n", result);
// 	return (0);
// }

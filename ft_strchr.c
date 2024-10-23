/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iezzam <iezzam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:35:23 by iezzam            #+#    #+#             */
/*   Updated: 2024/10/22 18:04:46 by iezzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int search)
{
	return (ft_memchr(str, search, ft_strlen(str) + 1));
}

// int	main(void)
// {
// 	char	str[] = "Hello, World!";
// 	char	*chr;

// 	chr = strchr(str, 'o');
// 	printf("Found '%c'\n", *chr);
// }
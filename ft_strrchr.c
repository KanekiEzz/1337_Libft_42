/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iezzam <iezzam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:24:00 by iezzam            #+#    #+#             */
/*   Updated: 2024/11/01 15:27:47 by iezzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int search)
{
	int	len_str;

	len_str = ft_strlen(str);
	while (len_str >= 0)
	{
		if (str[len_str] == (char)search)
			return ((char *)str + len_str);
		len_str--;
	}
	return (NULL);
}

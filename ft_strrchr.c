/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iezzam <iezzam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:24:00 by iezzam            #+#    #+#             */
/*   Updated: 2024/10/21 17:24:01 by iezzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int search)
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

// int main()
// {
//     const char *str = "Hello kaneki ken World!";
//     char *result = ft_strchr(str, 'k');

//     if (result)
//     {
//         printf("Found: %s\n", result);
//     }
//     else
//     {
//         printf("Character not found.\n");
//     }
// }
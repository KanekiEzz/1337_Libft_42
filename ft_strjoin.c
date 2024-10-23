/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iezzam <iezzam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 00:27:00 by iezzam            #+#    #+#             */
/*   Updated: 2024/10/23 01:16:48 by iezzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	char	*ptr;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2);
	ptr = malloc(size + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	if (size > 0)
	{
		j = 0;
		while (s1[j])
			ptr[i++] = s1[j++];
		j = 0;
		while (s2[j])
			ptr[i++] = s2[j++];
	}
	ptr[i] = 0;
	return (ptr);
}

// int	main(void)
// {
// 	char	s1[] = "kaneki";
// 	char	s2[] = "n";
// 	char	*result;

// 	result = ft_strjoin(s1, s2);
// 	printf("%s\n", result);
// 	free(result);
// }

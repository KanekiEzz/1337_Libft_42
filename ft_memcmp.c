/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iezzam <iezzam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:39:05 by iezzam            #+#    #+#             */
/*   Updated: 2024/10/22 19:06:31 by iezzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_;
	unsigned char	*s2_;

	i = 0;
	s1_ = (unsigned char *)s1;
	s2_ = (unsigned char *)s2;
	while (i < n)
	{
		if (s1_[i] != s2_[i])
			return (s1_[i] - s2_[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	p[] = "p";
// 	char	l[] = "";
// 	int		cmp;
// 	int		cpmp;

// 	cmp = memcmp(p, l, 12);
// 	cpmp = ft_memcmp(p, l, 12);
// 	printf("%d\n", cmp);
// 	printf("%d", cpmp);
// }
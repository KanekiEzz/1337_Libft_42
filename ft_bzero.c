/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iezzam <iezzam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 21:25:43 by iezzam            #+#    #+#             */
/*   Updated: 2024/10/22 09:21:30 by iezzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	str = (char *)s;
	while (n > 0)
	{
		*(str++) = 0;
		n--;
	}
}

// int	main(void)
// {
// 	char p[] = "kaneki kne";
// 	ft_bzero(p, 2);
// 	printf("%s", p);
// }
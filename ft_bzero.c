/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iezzam <iezzam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 21:25:43 by iezzam            #+#    #+#             */
/*   Updated: 2024/10/22 12:31:55 by iezzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

// int	main(void)
// {
// 	char	p[] = "kaneki kne";

// 	ft_bzero(p, 2);
// 	printf("%s", p);
// }

// int main(void)
// {
// 	int p = 123;
// 	ft_bzero(&p, sizeof(p));
// 	printf("%d", p);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iezzam <iezzam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 20:46:33 by iezzam            #+#    #+#             */
/*   Updated: 2024/10/23 21:12:50 by iezzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	if (fd < 0 || !s)
		return ;
	i = 0;
	while (s[i])
		ft_putchar_fd(s[i++], fd);
}

// int	main(void)
// {
// 	char *str = "kaneki ken";
//     ft_putstr_fd(str, 1);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iezzam <iezzam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:48:45 by iezzam            #+#    #+#             */
/*   Updated: 2024/10/23 21:56:43 by iezzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	_putnbr(long long n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	if (n > 9)
	{
		_putnbr(n / 10, fd);
		_putnbr(n % 10, fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (fd < 0)
		return ;
	_putnbr(n, fd);
}
// int	main(void)
// {
// 	ft_putnbr_fd(-2147483648, 1);
// 	return (0);
// }
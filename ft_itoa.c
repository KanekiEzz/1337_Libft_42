/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iezzam <iezzam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:21:15 by iezzam            #+#    #+#             */
/*   Updated: 2024/10/31 23:03:46 by iezzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	_len_integer(long long n)
{
	int	size_int;

	size_int = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		size_int++;
		n *= -1;
	}
	while (n > 0)
	{
		size_int++;
		n /= 10;
	}
	return (size_int);
}

char	*ft_itoa(int n)
{
	size_t		len;
	char		*ptr;
	size_t		i;
	long long	ln;

	ln = (long long)n;
	len = _len_integer(ln);
	ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	ptr[len] = '\0';
	if (n == 0)
		return (ptr[0] = '0', ptr);
	if (ln < 0)
	{
		ptr[0] = '-';
		ln *= -1;
	}
	i = len - 1;
	while (ln > 0)
	{
		ptr[i--] = ln % 10 + '0';
		ln /= 10;
	}
	return (ptr);
}

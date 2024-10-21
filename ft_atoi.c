/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iezzam <iezzam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:22:51 by iezzam            #+#    #+#             */
/*   Updated: 2024/10/21 17:28:06 by iezzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = (result * 10) + (*str - '0');
		str++;
	}
	return (result * sign);
}

// int   main(void)
// {
//     char *a = "  -1234506789ab567";
//     char *b = "-6789";
//     char *c = "  42";
//     char *d = "   +987";
//     char *e = "  -123abc";
//     char *f = "abc123";
//     char *j = "+-42";
//     char *h = "++++2147483647";
//     char *l = "-2147483648";
//     char *g = "  + 123";
//     char *ll = " ---+--+1234ab567";

//     printf("%d\n", ft_atoi(a));
//     printf("%d\n\n", atoi(a));

//     printf("%d\n", ft_atoi(b));
//     printf("%d\n\n", atoi(b));

//     printf("%d\n", ft_atoi(c));
//     printf("%d\n\n", atoi(c));

//     printf("%d\n", ft_atoi(d));
//     printf("%d\n\n", atoi(d));

//     printf("%d\n", ft_atoi(e));
//     printf("%d\n\n", atoi(e));

//     printf("%d\n", ft_atoi(f));
//     printf("%d\n\n", atoi(f));

//     printf("%d\n", ft_atoi(j));
//     printf("%d\n\n", atoi(j));

//     printf("%d\n", ft_atoi(h));
//     printf("%d\n\n", atoi(h));

//     printf("%d\n", ft_atoi(l));
//     printf("%d\n\n", atoi(l));

//     printf("%d\n", ft_atoi(g));
//     printf("%d\n\n", atoi(g));

//     printf("%d\n", ft_atoi(ll));
//     printf("%d\n\n", atoi(ll));
// }
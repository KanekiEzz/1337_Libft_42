/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iezzam <iezzam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 23:17:29 by iezzam            #+#    #+#             */
/*   Updated: 2024/10/26 18:49:09 by iezzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;

	ptr = (char *)malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

// int	main(void)
// {
// 	size_t num_elements = 5;
// 	size_t element_size = sizeof(int);

// 	int *array = (int *)ft_calloc(num_elements, element_size);

// 	size_t i = 0;
// 	while (i < num_elements)
// 	{
// 		printf("array[%zu] = %d\n", i, array[i]);
// 		i++;
// 	}
// 	free(array);
// 	return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iezzam <iezzam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:23:49 by iezzam            #+#    #+#             */
/*   Updated: 2024/10/21 17:38:24 by iezzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		i;
	char	*ptr;

	if (!(ptr = (char *)malloc((ft_strlen(str) + 1) * sizeof(char))))
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
// int main()
// {
//     char k[] = "kaneki";
//     char *ptr = ft_strdup(k);

//     printf("%s\n", ptr);

//     free(ptr);
// }

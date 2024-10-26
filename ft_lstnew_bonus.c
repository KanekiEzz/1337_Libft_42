/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iezzam <iezzam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 09:55:36 by iezzam            #+#    #+#             */
/*   Updated: 2024/10/25 11:06:47 by iezzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ptr_new_node;

	ptr_new_node = (t_list *)malloc(sizeof(t_list));
	if (!ptr_new_node)
		return (NULL);
	ptr_new_node->content = content;
	ptr_new_node->next = NULL;
	return (ptr_new_node);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iezzam <iezzam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:03:56 by iezzam            #+#    #+#             */
/*   Updated: 2024/10/28 15:32:50 by iezzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*curr_node;
	t_list	*next_node;

	if (!lst || !del)
		return ;
	curr_node = *lst;
	while (curr_node)
	{
		next_node = curr_node->next;
		del(curr_node->content);
		free(curr_node);
		curr_node = next_node;
	}
	*lst = NULL;
}

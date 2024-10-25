/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iezzam <iezzam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 09:13:04 by iezzam            #+#    #+#             */
/*   Updated: 2024/10/25 09:23:38 by iezzam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

void *f(void *content)
{
    while (content)
    {
        content = ((t_list *)content)->next;
    }
    return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*new;
	t_list	*head;

	if (!lst || !f || !del)
		return (NULL);
	head = NULL;
	while (lst)
	{
		temp = lst->next;
		new = ft_lstnew(NULL);
		if (!new)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		new->content = f(lst->content);
		ft_lstadd_back(&head, new);
		lst = temp;
	}
	return (head);
}
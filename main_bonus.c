#include "libft.h"

void	print_all_list(t_list *node1)
{
	if (node1 == NULL)
	{
		printf("List is empty.\n");
		return ;
	}
	printf("List contents:\n");
	while (node1)
	{
		if (node1->content)
		{
			printf("%s", node1->content);
			printf("\n");
		}
		node1 = node1->next;
	}
}
void	del(void *content)
{
	if (content)
		free(content);
}

void f(void *content)
{
	free(content);
}

int	main(void)
{
	t_list *node1 = ft_lstnew(ft_strdup("node1"));
	t_list *node2 = ft_lstnew(ft_strdup("node2"));
	t_list *node3 = ft_lstnew(ft_strdup("node3"));
	t_list *node4 = ft_lstnew(ft_strdup("node4"));
	t_list *node5 = ft_lstnew(ft_strdup("node5"));

	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	node4->next = node5;

	// t_list *new_front = ft_lstnew("new kaneki");
	// ft_lstadd_front(&node1, new_front);

	// t_list *lst_back = ft_lstnew("lst back");
	// ft_lstadd_back(&node1, lst_back);

	// ft_lstdelone(node2, del);
	// node1->next = node3;

	// ft_lstclear(&node1, del);

	print_all_list(node1);
	// printf("len node: %d\n", ft_lstsize(node1));

	// printf("print last list: ");
	// print_all_list(ft_lstlast(node1));
}
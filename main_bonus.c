#include "libft.h"

void	print_all_list(t_list *node1)
{
	while (node1)
	{
		printf("%s", node1->content);
		printf("\n");
		node1 = node1->next;
	}
}

int	main(void)
{
	t_list *node1 = ft_lstnew("node1");
	t_list *node2 = ft_lstnew("node2");
	t_list *node3 = ft_lstnew("node3");

	node1->next = node2;
	node2->next = node3;

	t_list *new_front = ft_lstnew("new kaneki");
	ft_lstadd_front(&node1, new_front);

	t_list *lst_back = ft_lstnew("lst back");
	ft_lstadd_back(&node1, lst_back);

	print_all_list(node1);
	printf("len node: %d\n", ft_lstsize(node1));

	printf("print last list: ");
	print_all_list(ft_lstlast(node1));
}

#include "libft.h"

void 	ft_push_after_node(t_list *prev_node, t_list *node)
{
	if (prev_node->next != NULL)
	{
		t_list *n = prev_node->next;
		prev_node->next = node;
		node->next = n;
	}
}
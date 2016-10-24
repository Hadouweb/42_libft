
#include "libft.h"

void 	ft_lstd_pushbefore_node(t_listd **lst, t_listd *node, t_listd *new_node)
{
	if (node->prev != NULL)
	{
		t_listd *n_prev = node->prev;
		n_prev->next = new_node;
		new_node->next = node;
		node->prev = new_node;
		new_node->prev = n_prev;
	}
	else
	{
		new_node->next = node;
		node->prev = new_node;
		*lst = new_node;
	}
}
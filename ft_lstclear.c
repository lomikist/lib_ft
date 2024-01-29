#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current_list;
	t_list	*next;

	current_list = *lst;
	if (lst == NULL || del == NULL)
		return ;
	while (current_list)
	{
		next = current_list->next;
		del(current_list->content);
		free(current_list);
		current_list = next;
	}
	*lst = NULL;
}
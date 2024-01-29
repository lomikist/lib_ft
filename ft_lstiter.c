#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*current_list = lst;
	t_list	*temp;

	if (lst == NULL || f == NULL)
		return ;
	while (current_list)
	{
		temp = current_list->next;
		f(current_list->content);
		current_list = temp;
	}
}
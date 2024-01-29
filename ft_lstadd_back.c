#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_el;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last_el = ft_lstlast(*lst);
	last_el->next = new;
}
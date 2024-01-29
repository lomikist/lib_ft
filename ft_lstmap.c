#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*temp;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	new_list = ft_lstnew(lst->content);
	while (new_list)
	{
		temp = new_list->next;
		f(new_list->content);
		new_list = temp;
	}
	return new_list;
}
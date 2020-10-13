#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *ret_l;
	t_list *new;

	if (lst == NULL)
		return (NULL);
	ret_l = NULL;
	while (lst)
	{
		if (!(new = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&ret_l, del);
			return (NULL);
		}
		ft_lstadd_back(&ret_l, new);
		lst = lst->next;
	}
	return (ret_l);
}

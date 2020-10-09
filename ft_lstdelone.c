#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	t_list *tmp;

	if (!lst)
		return ;
	tmp = lst->next;
	del(lst->content);
	free(lst);
	lst = tmp;
}

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	while (*lst)
	{
		ft_lstdelone(*lst, del);
		*lst = (*lst)->next;
	}
	lst = NULL;
	free(lst);
}

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *tmp_lst;

	if (!new)
		return ;
	tmp_lst = *lst;
	*lst = ft_lstlast(*lst);
	(*lst)->next = new;
	*lst = tmp_lst;
}

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int counter;

	counter = 0;
	if (!lst)
		return (0);
	while (lst->next)
	{
		counter++;
		lst = lst->next;
	}
	return (++counter);
}

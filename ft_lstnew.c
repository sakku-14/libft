#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *lst;

	if (!(lst = malloc(sizeof(t_list))))
		return (NULL);
	lst->next = NULL;
	lst->content = content;
	return (lst);
}

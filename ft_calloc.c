#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void *ret;

	if (!(ret = (void *)malloc(count * size)))
		return (NULL);
	ft_bzero(ret, count * size);
	return (ret);
}

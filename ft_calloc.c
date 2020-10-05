#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void **ret;
	void **ret_c;
	size_t i;

	ret = NULL;
	ret_c = NULL;
	i = 0;
	if (!(ret = (void *)malloc(sizeof(void) * count)))
		return (NULL);
	ret_c = ret;
	while (i++ < count)
		if (!(*ret++ = (void *)malloc(sizeof(void) * size)))
			return (NULL);
	ret = ret_c;
	while (count--)
	{
		ft_memset(ret, 0, sizeof(ret));
		ret++;
	}
	return (ret_c);
}

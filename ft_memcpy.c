#include "libft.h"
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*tmp;
	const char	*src_cpy;

	tmp = dst;
	src_cpy = src;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (n--)
		*tmp++ = *src_cpy++;
	return (dst);
}

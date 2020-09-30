#include "libft.h"
void	*ft_memcpy(void *restrict dst,
         const void *restrict src, size_t n)
{
	char		*tmp;
	const char	*src_cpy;

	tmp = dst;
	src_cpy = src;
	while (n--)
		*tmp++ = *src_cpy++;
	return (dst);
}

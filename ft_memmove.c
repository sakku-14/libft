#include "libft.h"

void	*memcpy_rev(void *dst, const void *src, size_t len)
{
	char *dst_c;
	const char *src_c;

	dst_c = dst;
	src_c = src;
	while (len > 0)
	{
		dst_c[len - 1] = src_c[len - 1];
		len--;
	}
	return (dst);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (dst <= src)
		return (ft_memcpy(dst, src, len));
	else
		return (memcpy_rev(dst, src, len));
}

#include "libft.h"

void	*memcpy_rev(void *dst, const void *src, size_t len)
{
	char *dst_c;
	const char *src_c;

	dst_c = dst + len - 1;
	src_c = src + len - 1;
	while (len--)
		*dst_c-- = *src_c--;
	return (dst);
}

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

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (dst > src)
		return (memcpy_rev(dst, src, len));
	else
		return (ft_memcpy(dst, src, len));
}

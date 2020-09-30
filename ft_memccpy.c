#include "libft.h"

void
*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	char *dst_c;
	const char *src_c;

	dst_c = dst;
	src_c = src;
	while (n--)
	{
		if (*src_c == c)
			return (++dst_c);
		*dst_c++ = *src_c++;
	}
	return (NULL);
}

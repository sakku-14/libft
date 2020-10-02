#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	const char *src_c;
	int len;

	src_c = src;
	len = ft_strlen(src);
	while (dstsize > 1 && *src_c)
	{
		*dst++ = *src_c++;
		dstsize--;
	}
	if (dstsize)
		*dst = '\0';
	return (len);
}

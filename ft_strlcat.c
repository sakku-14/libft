#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t len;

	if (ft_strlen(dst) <= dstsize)
		len = ft_strlen(dst) + ft_strlen(src);
	else
		len = ft_strlen(dst) + 1;
	if (dstsize <= ft_strlen(dst) + 1 )
		return (len);
	while (*dst)
	{
		dstsize--;
		dst++;
	}
	ft_strlcpy(dst, src, dstsize);
	return (len);
}

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t len;
	size_t room;

	if (dstsize < ft_strlen(dst))
	{
		len = ft_strlen(src) + dstsize;
		return (len);
	}
	else
		len = ft_strlen(dst) + ft_strlen(src);
	room = dstsize - 1 - ft_strlen(dst);
	while (*dst)
		dst++;
	ft_strlcpy(dst, src, room + 1);
	return (len);
}

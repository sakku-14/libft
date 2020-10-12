#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t len;
	size_t room;

	len = ft_strlen(dst) + ft_strlen(src);
	room = dstsize - 1 - ft_strlen(dst);
	while (*dst)
		dst++;
	if (room >= 0)
		ft_strlcpy(dst, src, room + 1);
	if (ft_strlen(dst) > dstsize)
		return (ft_strlen(dst) + 1);
	return (len);

	/*
	size_t len;

	if (dstsize < ft_strlen(dst))
	{
		len = ft_strlen(dst) + 1;
		return (len);
	}
	else
		len = ft_strlen(dst) + ft_strlen(src);

	while (*dst)
	{
		dstsize--;
		dst++;
	}
	ft_strlcpy(dst, src, dstsize);
	return (len);
	*/
}

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *ret;

	if (!(ret = (char *)malloc(len)))
		return (NULL);
	while (start--)
		s++;
	while (len--)
		*ret++ = *s++;
	return (ret);
}

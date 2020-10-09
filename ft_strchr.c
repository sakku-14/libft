#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s || !c)
		if (*s == c)
			return ((char *)s);
		else
			s++;
	return (NULL);
}

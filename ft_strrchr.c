#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char *ret_p;

	if (c == '\0')
		return (NULL);
	ret_p = NULL;
	while (*s)
	{
		if (*s == c)
			ret_p = s;
		s++;
	}
	return ((char *)ret_p);
}

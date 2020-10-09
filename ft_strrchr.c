#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char *ret_p;

	ret_p = NULL;
	while (*s || !c)
	{
		if (*s == c)
			ret_p = s;
		s++;
	}
	return ((char *)ret_p);
}

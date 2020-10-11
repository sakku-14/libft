#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char *ret_p;

	ret_p = NULL;
	while (*s)
	{
		if (*s == (char)c)
			ret_p = s;
		s++;
	}
	if (!c)
		ret_p = s;
	return ((char *)ret_p);
}

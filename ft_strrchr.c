#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *ret_p;

	ret_p = NULL;
	if (c != '\0')
	{
		while (*s)
		{
			if (*s == c)
				ret_p = s;
		}
		if (ret_p)
			return (ret_p);
	}
	return (NULL);
}

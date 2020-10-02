#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (c != '\0')
	{
		while (*s)
		{
			if (*s == c)
				return (s);
			else
				s++;
		}
	}
	return (NULL);
}

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char *s_c;

	s_c = s;
	while (n--)
	{
		if (*s_c++ == c)
			return ((void*)s);
		s++;
	}
	return (NULL);
}

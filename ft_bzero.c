#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char *ss;

	ss = s;
	while (n-- > 0 && *ss)
	{
		*ss++ = '\0';
	}
}

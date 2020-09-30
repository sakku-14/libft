#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char *bb;

	bb = (char*)b;
	while (len--)
		*bb++ = c;
	return (b);
}

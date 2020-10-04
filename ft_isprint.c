#include "libft.h"

int	ft_isprint(int c)
{
	if (040 <= c && c <= 0176)
		return (1);
	return (0);
}

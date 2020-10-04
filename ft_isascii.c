#include "libft.h"

int	ft_isascii(int c)
{
	if (0 <= c && c <= 0177)
		return (1);
	return (0);
}

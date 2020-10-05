#include <stdio.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *ret_str;
	char *tmp;

	if (!(ret_str = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1)))
		return (NULL);
	tmp = ret_str;
	while (*s1)
		*ret_str++ = *s1++;
	*ret_str = '\0';
	ret_str = tmp;
	return (ret_str);
}

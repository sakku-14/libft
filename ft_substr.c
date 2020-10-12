#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *ret;
	char *ret_c;

	if (!(ret = (char *)malloc(sizeof(char) * (len) + 1)))
		return (NULL);
	*ret = '\0';
	if (ft_strlen(s) <= start)
		return (ret);
	while (start-- && *s)
		s++;
	ret_c = ret;
	while (*s && len--)
		*ret_c++ = *s++;
	*ret_c = '\0';
	return (ret);
}

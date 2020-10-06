#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *ret;
	char *ret_c;

	if (ft_strlen(s) < start)
		return (NULL);
	if (!(ret = (char *)malloc(len)))
		return (NULL);
	while (start-- && *s++)
	if (len < 0)
		return (NULL);
	ret_c = ret;
	while (len-- && *s)
		*ret++ = *s++;
	*ret = '\0';
	return (ret_c);
}

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *ret;
	int len;

	len = ft_strlen(s);
	if (!(ret = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (*s)
	{
		*ret = f(1, *s);
		ret++;
		s++;
	}
	*ret = '\0';
	while (len--)
		ret--;
	return (ret);
}

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t len;
	size_t i;
	size_t j;
	char *ret;

	len = ft_strlen(s1) + ft_strlen(s2);
	if (!(ret = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	ret[0] = '\0';
	i = 0;
	while (i < ft_strlen(s1))
	{
		ret[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < ft_strlen(s2))
		ret[i++] = s2[j++];
	ret[i] = '\0';
	return (ret);
}

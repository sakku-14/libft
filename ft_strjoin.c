#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *str;
	int len;

	len = ft_strlen(s1) + ft_strlen(s2);
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (*s1 && *s2)
	{
		ft_strlcat(str, s1, ft_strlen(s1) + 1);
		ft_strlcat(str, s2, len + 1);
	}
	else if (!*s1 && *s2)
		ft_strlcat(str, s2, ft_strlen(s2) + 1);
	else if (*s1 && !*s2)
		ft_strlcat(str, s1, ft_strlen(s1) + 1);
	else
		return (NULL);
	return (str);
}

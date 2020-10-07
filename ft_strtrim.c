#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char *ret;
	char *ret_c;
	char *set_c;

	if (!(ret = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1))))
		return (NULL);
	ret_c = ret;
	set_c = (char *)set;
	while (*s1)
	{
		while (*set_c)
		{
			if (*s1 == *set_c)
				break ;
			set_c++;
		}
		if (!*set_c)
			*ret++ = *s1;
		set_c = (char *)set;
		s1++;
	}
	return (ret_c);
}

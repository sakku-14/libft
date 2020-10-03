#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char *hay_c;
	const char *nee_c;
	int len_c;

	if (!*needle)
		return ((char *)haystack);
	while (*haystack && len)
	{
		if (*haystack == *needle)
		{
			hay_c = haystack;
			nee_c = needle;
			len_c = len;
			while (*hay_c && len_c)
			{
				if (!*nee_c)
					return ((char *)haystack);
				if (*hay_c != *nee_c)
					break;
				hay_c++;
				nee_c++;
				len_c--;
				if (!*hay_c && !*nee_c)
					return ((char *)haystack);
			}
		}
		haystack++;
		len--;
	}
	return (NULL);


/*
	const char *ret_p;
	const char *check_str;
	const char *needle_cpy;

	if (!*needle)
		return ((char *)haystack);
	needle_cpy = needle;
	while (*haystack && len--)
	{
		if ((ret_p = ft_strchr(haystack, *needle)))
		{
			check_str = ret_p;
			while (*check_str++ == *needle++)
				if (!*needle)
					return ((char *)ret_p);
			haystack = ret_p;
			needle = needle_cpy;
		}
		haystack++;
	}
	return (NULL);
*/
}

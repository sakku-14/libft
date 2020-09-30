#include <string.h>
#include "libft.h"

int main()
{
	char str1[] = "1234567890";
	printf("%s\n", ft_memchr(str1, '3', 10));
	char str11[] = "1234567890";
	printf("%s\n", memchr(str11, '3', 10));

	char str2[] = "1234567890";
	printf("%s\n", ft_memchr(str2, '0', 10));
	char str22[] = "1234567890";
	printf("%s\n", memchr(str22, '0', 10));

	char str3[] = "1234567890";
	printf("%s\n", ft_memchr(str3, '5', 0));
	char str33[] = "1234567890";
	printf("%s\n", memchr(str33, '5', 0));

	return (0);
}

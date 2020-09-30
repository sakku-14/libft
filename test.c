#include <stdio.h>
#include <string.h>
#include "libft.h"

int main()
{
	char dst1[] = "1234567890";
	char src1[] = "xxxxx";
	printf("%s\n", ft_memmove(dst1, src1, 3));
	char dst11[] = "1234567890";
	char src11[] = "xxxxx";
	printf("%s\n", memmove(dst11, src11, 3));

	char dst2[] = "1234567890";
	printf("%s\n", ft_memmove(dst2, dst2+1, 3));
	char dst22[] = "1234567890";
	printf("%s\n", memmove(dst22, dst22+1, 3));

	char dst3[] = "1234567890";
	printf("%s\n", ft_memmove(dst3+1, dst3, 3));
	char dst33[] = "1234567890";
	printf("%s\n", memmove(dst33+1, dst33, 3));

	return (0);
}

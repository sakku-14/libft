#include "libft.h"

char *ft_itoa(int n)
{
	char *num;
	char *num_c;
	char *b_num;
	int digit;
	int tmp;
	int flag;

	if (n == 0)
		return ("0");
	flag = 0;
	if (n < 0)
	{
		flag = 1;
		n *= -1;
	}
	digit = 0;
	tmp = n;
	while (tmp > 0)
	{
		tmp /= 10;
		digit++;
	}
	if (!(num = (char *)malloc(sizeof(char) * digit)))
		return (NULL);
	num_c = num;
	if (!(b_num = (char *)malloc(sizeof(char) * digit)))
		return (NULL);
	while (n > 0)
	{
		*b_num++ = n % 10 + '0';
		n /= 10;
	}
	if (flag == 1)
		*num++ = '-';
	b_num--;
	while (digit--)
		*num++ = *b_num--;
	return (num_c);
}

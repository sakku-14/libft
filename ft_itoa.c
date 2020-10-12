#include "libft.h"

int check_negative(int n)
{
	int flag;

	flag = 0;
	if (n >= 0)
		flag = 1;
	return (flag);
}

int digit_is(int n, int flag)
{
	int digit;

	digit = 0;
	if (n == 0)
		digit = 1;
	while (n <= -1)
	{
		n /= 10;
		digit++;
	}
	if (flag == 0)
		return(digit + 1);
	return (digit);
}

void set_num(int flag, int digit, char *num, int n)
{
	num[digit--] = '\0';
	while (digit > 0)
	{
		num[digit--] = -(n % 10) + '0';
		n /= 10;
	}
	if (flag == 0)
		num[digit] = '-';
	else
		num[digit] = -(n % 10) + '0';
}

char *ft_itoa(int n)
{
	char *num;
	int digit;
	int flag;

	if ((flag = check_negative(n)))
		n *= -1;
	digit = digit_is(n, flag);
	if (!(num = (char *)malloc(sizeof(char) * (digit + 1))))
		return (NULL);
	set_num(flag, digit, num, n);
	return (num);
}

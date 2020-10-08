#include "libft.h"

int check_negative(int n)
{
	int flag;

	flag = 0;
	if (n < 0)
		flag = 1;
	return (flag);
}

int digit_is(int n)
{
	int digit;

	digit = 0;
	if (n == 0)
		digit = 1;
	while (n > 0)
	{
		n /= 10;
		digit++;
	}
	return (digit);
}

void set_rnum(int n, char *r_num)
{
	if (n == 0)
		*r_num++ = '0'; 
	while (n > 0)
	{
		*r_num++ = n % 10 + '0';
		n /= 10;
	}
}

void set_num(int flag, int digit, char *num, char *r_num)
{
	int i;

	i = 0;
	if (flag == 1)
		*num++ = '-';
	while (++i < digit)
		r_num++;
	while (digit--)
		*num++ = *r_num--;
}

char *ft_itoa(int n)
{
	char *num;
	char *num_c;
	char *r_num;
	int digit;
	int flag;

	if ((flag = check_negative(n)))
		n *= -1;
	digit = digit_is(n);
	if (!(num = (char *)malloc(sizeof(char) * digit)))
		return (NULL);
	num_c = num;
	if (!(r_num = (char *)malloc(sizeof(char) * digit)))
		return (NULL);
	set_rnum(n, r_num);
	set_num(flag, digit, num, r_num);
	return (num_c);
}

#include "libft.h"

int	ft_atoi(const char *str)
{
	long long int num;
	int flag;

	num = 0;
	flag = 0;
	while (('\t' <= *str && *str <= '\r') || *str == ' ')
		str++;
	if (*str == '+' || *str == '-')
		if (*str++ == '-')
			flag = 1;
	while ('0' <= *str && *str <= '9')
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	if (flag == 1 && num > 2147483648)
		return (0);
	if (flag == 1)
		return (-((int)num));
	if (num > 2147483647)
		return (-1);
	return ((int)num);
}

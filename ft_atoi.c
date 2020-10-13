#include "libft.h"
#include <limits.h>

int	ft_atoi(const char *str)
{
	unsigned int num;
	int flag;

	num = 0;
	flag = 0;
	while (('\t' <= *str && *str <= '\r') || *str == ' ')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			flag = 1;
		str++;
	}
	while ('0' <= *str && *str <= '9')
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	if (flag == 1)
	{
		if (num == 0)
			return (0);
		if (num - 1 > (unsigned int)(LONG_MAX))
			return (-1);
		return (-((int)num));
	}
	if (num > (unsigned int)(LONG_MAX))
		return (0);
	return ((int)num);
}

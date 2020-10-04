#include "libft.h"
int	ft_atoi(const char *str)
{
	int num;
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
		num = num * 10 - (*str - '0');
		str++;
	}
	if (flag == 1)
		return (num);
	return (-num);
}

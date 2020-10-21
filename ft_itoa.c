/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakuma <ysakuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 22:50:22 by ysakuma           #+#    #+#             */
/*   Updated: 2020/10/21 22:30:09 by ysakuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_positive(int n)
{
	int		flag;

	flag = 0;
	if (n >= 0)
		flag = 1;
	return (flag);
}

static int	digit_is(int n, int flag)
{
	int		digit;

	digit = 0;
	if (n == 0)
		digit = 1;
	while (n <= -1)
	{
		n /= 10;
		digit++;
	}
	if (flag == 0)
		return (digit + 1);
	return (digit);
}

static void	set_num(int flag, int digit, char *num, int n)
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

char		*ft_itoa(int n)
{
	char	*num;
	int		digit;
	int		flag;

	if ((flag = check_positive(n)))
		n *= -1;
	digit = digit_is(n, flag);
	if (!(num = malloc(sizeof(char) * (digit + 1))))
		return (NULL);
	set_num(flag, digit, num, n);
	return (num);
}

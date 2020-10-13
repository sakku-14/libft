/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakuma <ysakuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 22:55:25 by ysakuma           #+#    #+#             */
/*   Updated: 2020/10/13 22:55:26 by ysakuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char *ret_p;

	ret_p = NULL;
	while (*s)
	{
		if (*s == (char)c)
			ret_p = s;
		s++;
	}
	if (!c)
		ret_p = s;
	return ((char *)ret_p);
}

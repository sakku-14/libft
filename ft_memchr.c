/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakuma <ysakuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 23:02:24 by ysakuma           #+#    #+#             */
/*   Updated: 2020/10/13 23:02:25 by ysakuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const	char	*s_c;

	s_c = s;
	while (n--)
	{
		if (*s_c++ == c)
			return ((void*)s);
		s++;
	}
	return (NULL);
}

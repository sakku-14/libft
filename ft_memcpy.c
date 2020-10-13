/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakuma <ysakuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 22:51:55 by ysakuma           #+#    #+#             */
/*   Updated: 2020/10/13 23:06:14 by ysakuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char			*tmp;
	const	char	*src_cpy;

	tmp = dst;
	src_cpy = src;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (n--)
		*tmp++ = *src_cpy++;
	return (dst);
}

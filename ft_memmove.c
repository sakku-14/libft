/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakuma <ysakuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 22:52:06 by ysakuma           #+#    #+#             */
/*   Updated: 2020/10/15 13:52:08 by ysakuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*memcpy_rev(void *dst, const void *src, size_t len)
{
	char			*dst_c;
	const	char	*src_c;

	dst_c = dst + len - 1;
	src_c = src + len - 1;
	while (len--)
		*dst_c-- = *src_c--;
	return (dst);
}

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	if (dst > src)
		return (memcpy_rev(dst, src, len));
	else
		return (ft_memcpy(dst, src, len));
}

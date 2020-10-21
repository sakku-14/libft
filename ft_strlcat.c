/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakuma <ysakuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 22:54:20 by ysakuma           #+#    #+#             */
/*   Updated: 2020/10/21 22:24:38 by ysakuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t len;
	size_t room;

	if (dstsize < ft_strlen(dst))
		return (ft_strlen(src) + dstsize);
	else
		len = ft_strlen(dst) + ft_strlen(src);
	room = dstsize - 1 - ft_strlen(dst);
	while (*dst)
		dst++;
	ft_strlcpy(dst, src, room + 1);
	return (len);
}

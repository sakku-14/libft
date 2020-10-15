/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakuma <ysakuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 22:54:28 by ysakuma           #+#    #+#             */
/*   Updated: 2020/10/15 14:03:49 by ysakuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char	*src_c;
	int		len;

	src_c = (char *)src;
	len = ft_strlen(src);
	while (dstsize > 1 && *src_c)
	{
		*dst++ = *src_c++;
		dstsize--;
	}
	if (dstsize)
		*dst = '\0';
	return (len);
}

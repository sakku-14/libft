/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakuma <ysakuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 22:55:15 by ysakuma           #+#    #+#             */
/*   Updated: 2020/10/19 19:42:24 by ysakuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (*needle == '\0')
		return ((char *)haystack);
	if (*haystack == '\0' || len < 1)
		return (NULL);
	while (ft_strlen(needle) > len
		|| ft_strncmp(haystack, needle, ft_strlen(needle)) != 0)
	{
		while (*haystack != *needle)
		{
			if (*haystack++ == '\0' || len-- < 1)
				return (NULL);
		}
		if (ft_strlen(needle) > len)
			return (NULL);
		if (ft_strncmp(haystack, needle, ft_strlen(needle)) != 0)
		{
			if (*haystack++ == '\0' || len-- < 1)
				return (NULL);
		}
	}
	return ((char *)haystack);
}

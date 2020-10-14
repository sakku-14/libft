/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakuma <ysakuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 22:55:15 by ysakuma           #+#    #+#             */
/*   Updated: 2020/10/14 13:36:40 by ysakuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	this_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n--)
	{
		if (!*s2)
			return (0);
		if (*s1 != *s2)
			break ;
		s1++;
		s2++;
		if (!*s1 && !*s2)
			return (0);
	}
	return (1);
}

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (!*needle)
		return ((char *)haystack);
	while (*haystack && len)
	{
		if (*haystack == *needle)
			if (this_strncmp(haystack, needle, len) == 0)
				return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}

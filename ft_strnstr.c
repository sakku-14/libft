/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakuma <ysakuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 22:55:15 by ysakuma           #+#    #+#             */
/*   Updated: 2020/10/13 23:20:00 by ysakuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const	char	*hay_c;
	const	char	*nee_c;
	int				len_c;

	if (!*needle)
		return ((char *)haystack);
	while (*haystack && len)
	{
		if (*haystack == *needle)
		{
			hay_c = haystack;
			nee_c = needle;
			len_c = len;
			while (*hay_c && len_c)
			{
				if (!*nee_c)
					return ((char *)haystack);
				if (*hay_c != *nee_c)
					break ;
				hay_c++;
				nee_c++;
				len_c--;
				if (!*hay_c && !*nee_c)
					return ((char *)haystack);
			}
		}
		haystack++;
		len--;
	}
	return (NULL);
}

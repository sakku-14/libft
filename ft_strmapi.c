/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakuma <ysakuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 22:54:46 by ysakuma           #+#    #+#             */
/*   Updated: 2020/10/15 15:14:32 by ysakuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ret;
	size_t	len;
	size_t	i;

	len = ft_strlen(s);
	i = 0;
	if (!(ret = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (*s)
		*ret++ = f(i++, *s++);
	*ret = '\0';
	while (len--)
		ret--;
	return (ret);
}

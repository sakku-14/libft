/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakuma <ysakuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 22:54:46 by ysakuma           #+#    #+#             */
/*   Updated: 2020/10/21 22:26:37 by ysakuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ret;
	char	*tmp;
	size_t	len;
	size_t	i;

	len = ft_strlen(s);
	i = 0;
	if (!(ret = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	tmp = ret;
	while (*s)
		*tmp++ = f(i++, *s++);
	*tmp = '\0';
	return (ret);
}

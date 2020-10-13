/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakuma <ysakuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 22:55:36 by ysakuma           #+#    #+#             */
/*   Updated: 2020/10/13 23:01:53 by ysakuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ret;
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	len;

	i = 0;
	k = 0;
	j = ft_strlen(s1);
	while ((ft_strchr(set, s1[i]) != NULL) && i < j)
		i++;
	while ((ft_strchr(set, s1[j]) != NULL) && j > 0)
		j--;
	if (j == 0)
		len = 0;
	else
		len = j - i + 1;
	if (!(ret = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	ret[0] = '\0';
	while (i <= j)
		ret[k++] = s1[i++];
	ret[k] = '\0';
	return (ret);
}

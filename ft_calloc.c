/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakuma <ysakuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 22:48:55 by ysakuma           #+#    #+#             */
/*   Updated: 2020/10/15 18:20:38 by ysakuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void *ret;

	if (!count || !size)
	{
		count = 1;
		size = 1;
	}
	if (!(ret = (void *)malloc(count * size)))
		return (NULL);
	ft_memset(ret, 0, count * size);
	return (ret);
}

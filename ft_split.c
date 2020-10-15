/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakuma <ysakuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 22:53:10 by ysakuma           #+#    #+#             */
/*   Updated: 2020/10/15 15:09:39 by ysakuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		count_words(char *s, char c)
{
	int cnt;

	cnt = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (!*s)
			break ;
		while (*s && *s != c)
			s++;
		cnt++;
	}
	return (cnt);
}

static	char	*my_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while ((i < n) && (src[i] != '\0'))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static	int		free_strs(char **p, int i)
{
	while (i-- > 0)
		free(p[i]);
	free(p);
	return (0);
}

static	int		set_words(char **p, char *s, char *c, int size)
{
	int		wlen;
	int		i;
	char	*tmp;

	i = -1;
	while (++i < size)
	{
		while (*s && *s == *c)
			s++;
		wlen = 0;
		tmp = s;
		while (*tmp && *tmp != *c)
		{
			wlen++;
			tmp++;
		}
		if (!(p[i] = (char*)malloc(sizeof(char) * (wlen + 1))))
			return (free_strs(p, i));
		my_strncpy(p[i], s, wlen);
		s += wlen;
	}
	return (1);
}

char			**ft_split(char const *str, char c)
{
	char	**p;
	char	*s;
	int		size;

	if (!str)
		return (NULL);
	s = (char *)str;
	size = count_words(s, c);
	if (!(p = (char **)malloc(sizeof(char *) * (size + 1))))
		return (NULL);
	if (!(set_words(p, s, &c, size)))
		return (NULL);
	p[size] = NULL;
	return (p);
}

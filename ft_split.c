#include "libft.h"

int		is_charset(char s_c, char c)
{
	if (s_c == c)
		return (1);
	return (0);
}

int		count_words(char *s, char c)
{
	int cnt;

	cnt = 0;
	while (*s)
	{
		while (*s && is_charset(*s, c))
			s++;
		if (!*s)
			break ;
		while (*s && !is_charset(*s, c))
			s++;
		cnt++;
	}
	return (cnt);
}

char	*my_strncpy(char *dest, char *src, unsigned int n)
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

void	set_words(char **p, char *s, char *c, int size)
{
	int		wlen;
	int		i;
	char	*tmp;

	i = -1;
	while (++i < size)
	{
		while (*s && is_charset(*s, *c))
			s++;
		wlen = 0;
		tmp = s;
		while (*tmp && !is_charset(*tmp, *c))
		{
			wlen++;
			tmp++;
		}
		p[i] = (char*)malloc(sizeof(char) * (wlen + 1));
		my_strncpy(p[i], s, wlen);
		s += wlen;
	}
}

char	**ft_split(char const *str, char c)
{
	char	**p;
	char	*s;
	int		size;

	s = (char *)str;
	size = count_words(s, c);
	if (!(p = (char **)malloc(sizeof(char *) * (size + 1))))
		return (NULL);
	set_words(p, s, &c, size);
	p[size] = NULL;
	return (p);
}

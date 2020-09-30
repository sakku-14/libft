#ifndef _LIBFT_H
# define _LIBFT_H

# include <stdio.h>
# include <stdlib.h>
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *restrict dst,const void *restrict src, size_t n);
void
*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n);

#endif

NAME	=	libft.a

CC	= gcc

CFLAGS	= -Wall	-Wextra	-Werror

RM		=	rm -f

INCDIR	=	./

SRCDIR	=	./

SRCNAME	=	ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c

SRCS	=	${addprefix ${SRCDIR}, ${SRCNAME}}

OBJS	=	${SRCS:.c=.o}



.c.o:
			${CC} ${CFLAGS}	-I ${INCDIR} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar	rc	${NAME}	${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:	all clean fclean re

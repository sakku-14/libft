# libft

## Features
This is a C library regrouping usual functions.

## Requirement
- gcc compiler

## Usage
Clone this repository:
```shell
git clone https://github.com/sakku-14/libft.git
```

Generate ***libft.a***. If you do not need list function, you can just run ```make```.:
```shell
make && make bonus
```

Remove objective files:
```shell
make clean
```

Delete all:
```shell
make fclean
```

## Note
These following functions are faithfully reproduced by manual.

• memset • bzero • memcpy • memccpy • memmove • memchr • memcmp • strlen • strlcpy • strlcat • strchr • strrchr • strnstr • strncmp • atoi • isalpha • isdigit • isalnum • isascii • isprint • toupper • tolower • calloc • strdup

These following functions are built according to the specification.

| function name | ft_substr |
| ---- | ---- |
| Prototype | char *ft_substr(char const *s, unsigned int start, size_t len); |
| Parameters | #1. The string from which to create the substring.<br>#2. The start index of the substring in the string ’s’.<br>#3. The maximum length of the substring. |
| Return value | The substring. NULL if the allocation fails. |
| External functs | malloc |
| Description | Allocates (with malloc(3)) and returns a substring from the string ’s’.<br>The substring begins at index ’start’ and is of maximum size ’len’. |

| function name | ft_strjoin |
| ---- | ---- |
| Prototype | char *ft_strjoin(char const *s1, char const *s2); |
| Parameters | #1. The prefix string.<br>#2. The suffix string. |
| Return value | The new string. NULL if the allocation fails. |
| External functs | malloc |
| Description | Allocates (with malloc(3)) and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’. |

| function name | ft_strtrim |
| ---- | ---- |
| Prototype | char *ft_strtrim(char const *s1, char const *set); |
| Parameters | #1. The string to be trimmed.<br>#2. The reference set of characters to trim. |
| Return value | The trimmed string. NULL if the allocation fails. |
| External functs | malloc |
| Description | Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string. |

| function name | ft_split |
| ---- | ---- |
| Prototype | char \*\*ft_split(char const *s, char c); |
| Parameters | #1. The string to be split.<br>#2. The delimiter character. |
| Return value | The array of new strings resulting from the split. NULL if the allocation fails. |
| External functs | malloc, free |
| Description | Allocates (with malloc(3)) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter. The array must be ended by a NULL pointer. |

| function name | ft_itoa |
| ---- | ---- |
| Prototype | char *ft_itoa(int n); |
| Parameters | #1. the integer to convert. |
| Return value | The string representing the integer. NULL if the allocation fails. |
| External functs | malloc |
| Description | Allocates (with malloc(3)) and returns a string representing the integer received as an argument. Negative numbers must be handled. |

| function name | ft_strmapi |
| ---- | ---- |
| Prototype | char *ft_strmapi(char const *s, char (*f)(unsigned int, char)); |
| Parameters | #1. The string on which to iterate.<br>#2. The function to apply to each character. |
| Return value | The string created from the successive applications of ’f’. Returns NULL if the allocation fails. |
| External functs | malloc |
| Description | Applies the function ’f’ to each character of the string ’s’ to create a new string (with malloc(3)) resulting from successive applications of ’f’. |

| function name | ft_putchar_fd |
| ---- | ---- |
| Prototype | void ft_putchar_fd(char c, int fd); |
| Parameters | #1. The character to output.<br>#2. The file descriptor on which to write. |
| Return value | None |
| External functs | write |
| Description | Outputs the character ’c’ to the given file descriptor. |

| function name | ft_putstr_fd |
| ---- | ---- |
| Prototype | void ft_putstr_fd(char *s, int fd); |
| Parameters | #1. The string to output.<br>#2. The file descriptor on which to write. |
| Return value | None |
| External functs | write |
| Description | Outputs the string ’s’ to the given file descriptor. |

| function name | ft_putendl_fd |
| ---- | ---- |
| Prototype | void ft_putendl_fd(char *s, int fd); |
| Parameters | #1. The string to output.<br>#2. The file descriptor on which to write. |
| Return value | None |
| External functs | write |
| Description | Outputs the string ’s’ to the given file descriptor, followed by a newline. |

| function name | ft_putnbr_fd |
| ---- | ---- |
| Prototype | void ft_putnbr_fd(int n, int fd); |
| Parameters | #1. The integer to output.<br>#2. The file descriptor on which to write. |
| Return value | None |
| External functs | write |
| Description | Outputs the integer ’n’ to the given file descriptor. |

| function name | ft_lstnew |
| ---- | ---- |
| Prototype | t_list *ft_lstnew(void *content); |
| Parameters | #1. The content to create the new element with. |
| Return value | The new element. |
| External functs | malloc |
| Description | Allocates (with malloc(3)) and returns a new element. The variable ’content’ is initialized with the value of the parameter ’content’. The variable ’next’ is initialized to NULL. |

| function name | ft_lstadd_front |
| ---- | ---- |
| Prototype | void ft_lstadd_front(t_list \*\*lst, t_list *new); |
| Parameters | #1. The address of a pointer to the first link of a list.<br>#2. The address of a pointer to the element to be added to the list. |
| Return value | None |
| External functs | None |
| Description | Adds the element ’new’ at the beginning of the list. |

| function name | ft_lstsize |
| ---- | ---- |
| Prototype | int ft_lstsize(t_list *lst); |
| Parameters | #1. The beginning of the list. |
| Return value | Length of the list. |
| External functs | None |
| Description | Counts the number of elements in a list. |

| function name | ft_lstlast |
| ---- | ---- |
| Prototype | t_list *ft_lstlast(t_list *lst); |
| Parameters | #1. The beginning of the list. |
| Return value | Last element of the list. |
| External functs | None |
| Description | Returns the last element of the list. |

| function name | ft_lstadd_back |
| ---- | ---- |
| Prototype | void ft_lstadd_back(t_list \*\*lst, t_list *new); |
| Parameters | #1. The address of a pointer to the first link of a list.<br>#2. The address of a pointer to the element to be added to the list. |
| Return value | None |
| External functs | None |
| Description | Adds the element ’new’ at the end of the list. |

| function name | ft_lstdelone |
| ---- | ---- |
| Prototype | void ft_lstdelone(t_list *lst, void (*del)(void *)); |
| Parameters | #1. The element to free.<br>#2. The address of the function used to delete the content. |
| Return value | None |
| External functs | free |
| Description | Takes as a parameter an element and frees the memory of the element’s content using the function ’del’ given as a parameter and free the element. The memory of ’next’ must not be freed. |

| function name | ft_lstclear |
| ---- | ---- |
| Prototype | void ft_lstclear(t_list \*\*lst, void (*del)(void *)); |
| Parameters | #1. The adress of a pointer to an element.<br>#2. The adress of the function used to delete the content of the element. |
| Return value | None |
| External functs | free |
| Description | Deletes and frees the given element and every successor of that element, using the function ’del’ and free(3). Finally, the pointer to the list must be set to NULL. |

| function name | ft_lstiter |
| ---- | ---- |
| Prototype | void ft_lstiter(t_list *lst, void (*f)(void *)); |
| Parameters | #1. The adress of a pointer to an element.<br>#2. The adress of the function used to iterate on the list. |
| Return value | None |
| External functs | None |
| Description | Iterates the list ’lst’ and applies the function ’f’ to the content of each element. |

| function name | ft_lstmap |
| ---- | ---- |
| Prototype | t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *)); |
| Parameters | #1. The adress of a pointer to an element.<br>#2. The adress of the function used to iterate on the list.<br>#3. The adress of the function used to delete the content of an element if needed. |
| Return value | The new list. NULL if the allocation fails. |
| External functs | malloc, free |
| Description | Iterates the list ’lst’ and applies the function ’f’ to the content of each element. Creates a new list resulting of the successive applications of the function ’f’. The ’del’ function is used to delete the content of an element if needed. |

## Author
- Yuki Sakuma

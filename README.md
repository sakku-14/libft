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

| function name |  |
| ---- | ---- |
| Prototype |  |
| Turn in files |  |
| Parameters |  |
| Return value |  |
| External functs |  |
| Description |  |

| function name | ft_substr |
| ---- | ---- |
| Prototype | char *ft_substr(char const *s, unsigned int start, size_t len); |
| Turn in files | - |
| Parameters | #1. The string from which to create the substring.<br>#2. The start index of the substring in the string ’s’.<br>#3. The maximum length of the substring. |
| Return value | The substring. NULL if the allocation fails. |
| External functs | malloc |
| Description | Allocates (with malloc(3)) and returns a substring from the string ’s’.<br>The substring begins at index ’start’ and is of maximum size ’len’. |

## Author
- Yuki Sakuma

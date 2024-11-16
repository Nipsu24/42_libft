<h1 align="center">libft</h1>

> Hive Helsinki (School 42) first curriculum project (Rank00)

<h2 align="center">
	<a href="#about">About</a>
	<span> · </span>
	<a href="#index">Index</a>
	<span> · </span>
	<a href="#requirements">Requirements</a>
	<span> · </span>
	<a href="#instructions">Instructions</a>
	<span> · </span>
	<a href="#testing">Testing</a>
</h2>

## About
The repository contains 34 custom made functions, mainly orienting to the respective standard library functions of the C programming language. 

## Index
* [`ft_atoi.c`](https://github.com/Nipsu24/libft/blob/master/ft_atoi.c)
* [`ft_bzero.c`](https://github.com/Nipsu24/libft/blob/master/ft_bzero.c ) 
* [`ft_calloc.c`](https://github.com/Nipsu24/libft/blob/master/ft_calloc.c ) 
* [`ft_isalnum.c`](https://github.com/Nipsu24/libft/blob/master/ft_isalnum.c)
* [`ft_isalpha.c`](https://github.com/Nipsu24/libft/blob/master/ft_isalpha.c)
* [`ft_isascii.c`](https://github.com/Nipsu24/libft/blob/master/ft_isascii.c)
* [`ft_isdigit.c`](https://github.com/Nipsu24/libft/blob/master/ft_isdigit.c)
* [`ft_isprint.c`](https://github.com/Nipsu24/libft/blob/master/ft_isprint.c)
* [`ft_itoa.c`](https://github.com/Nipsu24/libft/blob/master/ft_itoa.c ) 
* [`ft_memchr.c`](https://github.com/Nipsu24/libft/blob/master/ft_memchr.c ) 
* [`ft_memcmp.c`](https://github.com/Nipsu24/libft/blob/master/ft_memcmp.c ) 
* [`ft_memcpy.c`](https://github.com/Nipsu24/libft/blob/master/ft_memcpy.c ) 
* [`ft_memmove.c`](https://github.com/Nipsu24/libft/blob/master/ft_memmove.c)
* [`ft_memset.c`](https://github.com/Nipsu24/libft/blob/master/ft_memset.c ) 
* [`ft_putchar_fd.c`](https://github.com/Nipsu24/libft/blob/master/ft_putchar_fd.c ) 
* [`ft_putendl_fd.c`](https://github.com/Nipsu24/libft/blob/master/ft_putendl_fd.c ) 
* [`ft_putnbr_fd.c`](https://github.com/Nipsu24/libft/blob/master/ft_putnbr_fd.c ) 
* [`ft_putstr_fd.c`](https://github.com/Nipsu24/libft/blob/master/ft_putstr_fd.c ) 
* [`ft_split.c`](https://github.com/Nipsu24/libft/blob/master/ft_split.c ) 
* [`ft_strchr.c`](https://github.com/Nipsu24/libft/blob/master/ft_strchr.c)
* [`ft_strdup.c`](https://github.com/Nipsu24/libft/blob/master/ft_strdup.c ) 
* [`ft_striteri.c`](https://github.com/Nipsu24/libft/blob/master/ft_striteri.c ) 
* [`ft_strjoin.c`](https://github.com/Nipsu24/libft/blob/master/ft_strjoin.c)
* [`ft_strlcat.c`](https://github.com/Nipsu24/libft/blob/master/ft_strlcat.c)
* [`ft_strlcpy.c`](https://github.com/Nipsu24/libft/blob/master/ft_strlcpy.c)
* [`ft_strlen.c`](https://github.com/Nipsu24/libft/blob/master/ft_strlen.c ) 
* [`ft_strmapi.c`](https://github.com/Nipsu24/libft/blob/master/ft_strmapi.c)
* [`ft_strncmp.c`](https://github.com/Nipsu24/libft/blob/master/ft_strncmp.c)
* [`ft_strnstr.c`](https://github.com/Nipsu24/libft/blob/master/ft_strnstr.c)
* [`ft_strrchr.c`](https://github.com/Nipsu24/libft/blob/master/ft_strrchr.c)
* [`ft_strtrim.c`](https://github.com/Nipsu24/libft/blob/master/ft_strtrim.c)
* [`ft_substr.c`](https://github.com/Nipsu24/libft/blob/master/ft_substr.c)
* [`ft_tolower.c`](https://github.com/Nipsu24/libft/blob/master/ft_tolower.c)
* [`ft_toupper.c`](https://github.com/Nipsu24/libft/blob/master/ft_toupper.c)

## Requirements
-`gcc` compiler
with `<stdlib.h>` and `<unistd.h>` 

## Instructions

### 1. Compiling the library

To compile the library, go to its path and run:

```
$ make
```

### 2. Cleaning all binary (.o) and executable files (.a)

To delete all files generated with make, go to the path and run:
```
$ make fclean
```

### 3. Using it in your code (basic example)

To use the library functions, include header path e.g in your main.c file (given libft is in a subfolder):
```
#include "libft/libft.h"
```
compile libft as stated above, then compile the actual program
```
cc main.c libft/libft.a
```

## Testing
This library has been tested with [Francinette](https://github.com/xicodomingues/francinette).

<h1 align="center">libft</h1>

> Hive Helsinki (School 42) first curriculum project (Rank00)

<h2 align="center">
	<a href="#about">About</a>
	<span> · </span>
	<a href="#index">Functions</a>
	<span> · </span>
	<a href="#requirements">Requirements</a>
	<span> · </span>
	<a href="#instructions">Instructions</a>
	<span> · </span>
	<a href="#testing">Testing</a>
</h2>

## About
The repository contains 34 custom made functions, mainly orienting to the respective standard library functions of the C programming language. 

## Functions
* [`ft_atoi.c`](https://github.com/Nipsu24/libft/blob/master/ft_atoi.c) &middot; [`ft_bzero.c`](https://github.com/Nipsu24/libft/blob/master/ft_bzero.c ) &middot; [`ft_calloc.c`](https://github.com/Nipsu24/libft/blob/master/ft_calloc.c ) &middot; [`ft_isalnum.c`](https://github.com/Nipsu24/libft/blob/master/ft_isalnum.c) &middot; [`ft_isalpha.c`](https://github.com/Nipsu24/libft/blob/master/ft_isalpha.c) &middot; [`ft_isascii.c`](https://github.com/Nipsu24/libft/blob/master/ft_isascii.c) &middot; [`ft_isdigit.c`](https://github.com/Nipsu24/libft/blob/master/ft_isdigit.c) &middot; [`ft_isprint.c`](https://github.com/Nipsu24/libft/blob/master/ft_isprint.c)
* [`ft_itoa.c`](https://github.com/Nipsu24/libft/blob/master/ft_itoa.c ) &middot; [`ft_memchr.c`](https://github.com/Nipsu24/libft/blob/master/ft_memchr.c ) &middot; [`ft_memcmp.c`](https://github.com/Nipsu24/libft/blob/master/ft_memcmp.c ) &middot; [`ft_memcpy.c`](https://github.com/Nipsu24/libft/blob/master/ft_memcpy.c ) &middot; [`ft_memmove.c`](https://github.com/Nipsu24/libft/blob/master/ft_memmove.c) &middot; [`ft_memset.c`](https://github.com/Nipsu24/libft/blob/master/ft_memset.c ) &middot; [`ft_putchar_fd.c`](https://github.com/Nipsu24/libft/blob/master/ft_putchar_fd.c ) &middot; [`ft_putendl_fd.c`](https://github.com/Nipsu24/libft/blob/master/ft_putendl_fd.c ) 
* [`ft_putnbr_fd.c`](https://github.com/Nipsu24/libft/blob/master/ft_putnbr_fd.c ) &middot; [`ft_putstr_fd.c`](https://github.com/Nipsu24/libft/blob/master/ft_putstr_fd.c ) &middot; [`ft_split.c`](https://github.com/Nipsu24/libft/blob/master/ft_split.c ) &middot; [`ft_strchr.c`](https://github.com/Nipsu24/libft/blob/master/ft_strchr.c) &middot; [`ft_strdup.c`](https://github.com/Nipsu24/libft/blob/master/ft_strdup.c ) &middot; [`ft_striteri.c`](https://github.com/Nipsu24/libft/blob/master/ft_striteri.c ) &middot; [`ft_strjoin.c`](https://github.com/Nipsu24/libft/blob/master/ft_strjoin.c) &middot; [`ft_strlcat.c`](https://github.com/Nipsu24/libft/blob/master/ft_strlcat.c)
* [`ft_strlcpy.c`](https://github.com/Nipsu24/libft/blob/master/ft_strlcpy.c) &middot; [`ft_strlen.c`](https://github.com/Nipsu24/libft/blob/master/ft_strlen.c ) &middot; [`ft_strmapi.c`](https://github.com/Nipsu24/libft/blob/master/ft_strmapi.c) &middot; [`ft_strncmp.c`](https://github.com/Nipsu24/libft/blob/master/ft_strncmp.c) &middot; [`ft_strnstr.c`](https://github.com/Nipsu24/libft/blob/master/ft_strnstr.c) &middot; [`ft_strrchr.c`](https://github.com/Nipsu24/libft/blob/master/ft_strrchr.c) &middot; [`ft_strtrim.c`](https://github.com/Nipsu24/libft/blob/master/ft_strtrim.c) &middot; [`ft_substr.c`](https://github.com/Nipsu24/libft/blob/master/ft_substr.c)
* [`ft_tolower.c`](https://github.com/Nipsu24/libft/blob/master/ft_tolower.c) &middot; [`ft_toupper.c`](https://github.com/Nipsu24/libft/blob/master/ft_toupper.c)

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
compile libft as stated above, then compile the actual program:
```
cc main.c libft/libft.a
```

## Testing
This library has been tested with [Francinette](https://github.com/xicodomingues/francinette).

<h1 align="center">libft</h1>

> Hive Helsinki (School 42) first curriculum project (Rank00)

The repository contains 34 custom made functions, orienting to the respective standard library functions of the C programming language. 

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

This project is a __C library__ of useful functions that are allowed to be used in future __School 42 cursus__ projects. With access to this library, the coding proccess in incoming projects will be more effective. The aim of rewrite this functions is to get a better understanding of them, and get a whide range of utilities for the next projects. [You can find more information in the subject](https://github.com/PublioElio/School-42-libft/blob/main/libft_subject.pdf). As it's specified in the subjet, all the archives are in the same folder.

The code in this repository follows [the rules of the Norminette](https://github.com/PublioElio/School42-Piscina-agosto-2022/blob/main/norme.es.pdf).

## Index
### Functions from `<ctype.h>` library
* [`ft_isascii`][(https://github.com/Nipsu24/libft/blob/master/ft_isascii.c)]

## Requirements
-`gcc` compiler
with `<stdlib.h>` and `<unistd.h>` 

## Instructions

### 1. Compiling the library

To compile the library, go to its path and run:

For __basic__ functions:
```
$ make
```

For __bonus__ functions:
```
$ make bonus
```

### 2. Cleaning all binary (.o) and executable files (.a)

To delete all files generated with make, go to the path and run:
```
$ make fclean
```

### 3. Using it in your code

To use the library functions in your code, simply include this header:
```
#include "libft.h"
```

## Testing
This library have been tested with [Francinette](https://github.com/xicodomingues/francinette).

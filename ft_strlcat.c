/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeier <mmeier@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:03:11 by mmeier            #+#    #+#             */
/*   Updated: 2023/10/31 16:01:08 by mmeier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "ft_strlen.c"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dstlen;
	size_t	srclen;

	i = 0;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstsize == 0)
		return (srclen);
	if (dstsize > dstlen)
		return (dstlen + srclen);
	while (src[i] != '\0' && dstsize - dstlen - 1 > i)
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + dstsize);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char src[] = "Hello World!";
	char dst[] = "Hive";
	size_t	dstsize;

	dstsize  = 2;
	printf("own function" "\n");
	printf("%zu""\n", ft_strlcat(dst, src, dstsize));
	printf("library function" "\n");
	printf("%lu", strlcat(dst, src, dstsize));
	return (0);
}
*/

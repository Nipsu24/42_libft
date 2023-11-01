/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeier <mmeier@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 09:36:46 by mmeier            #+#    #+#             */
/*   Updated: 2023/10/31 11:04:20 by mmeier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0' && dstsize - 1 > i)
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize != 0)
		dst[i] = '\0';
	if (src[i] != '\0')
	{
		while (src[i] != '\0')
			i++;
	}
	return (i);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char src[] = "Hello World!";
	char dst[] = "Hive Helsinki";
	size_t	dstsize;

	dstsize  = 8;
	printf("own function" "\n");
	printf("%zu""\n", ft_strlcpy(dst, src, dstsize));
	printf("library function" "\n");
	printf("%lu", strlcpy(dst, src, dstsize));
	return (0);
}
*/

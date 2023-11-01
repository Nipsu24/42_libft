/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeier <mmeier@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:16:27 by mmeier            #+#    #+#             */
/*   Updated: 2023/10/30 17:01:30 by mmeier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dstptr;
	const char	*srcptr;
	size_t		i;

	dstptr = dst;
	srcptr = src;
	i = 0;
	while (i < n)
	{
		dstptr[i] = srcptr[i];
		i++;
	}
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char src[] = "Hello World!";
	char dst[] = "Hive Helsinki";
	size_t	n;

	n  = 5;
	printf("own function" "\n");
	printf("%s""\n", ft_memcpy(dst, src, n));
	printf("library function" "\n");
	printf("%s", memcpy(dst, src, n));
	return (0);
}
*/

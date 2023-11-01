/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeier <mmeier@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:06:44 by mmeier            #+#    #+#             */
/*   Updated: 2023/10/31 09:28:32 by mmeier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*(dstptr > srcptr) = dstptr is located behind srcptr memory location
 *(dstptr < srcptr) = dstptr is located infront srcptr memory location */
#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dstptr;
	const char	*srcptr;
	size_t		i;

	srcptr = src;
	dstptr = dst;
	i = 0;
	if (dstptr == srcptr)
		return (dst);
	if (dstptr < srcptr)
	{
		while (i < len)
		{
			dstptr[i] = srcptr[i];
			i++;
		}
	}
	if (dstptr > srcptr)
		i = len;
	while (i > 0)
	{
		dstptr[i] = srcptr[i];
		i--;
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
	size_t	len;

	len  = 5;
	printf("own function" "\n");
	printf("%s""\n", ft_memmove(dst, src, len));
	printf("library function" "\n");
	printf("%s", memmove(dst, src, len));
	return (0);
}
*/

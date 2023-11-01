/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeier <mmeier@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 11:06:39 by mmeier            #+#    #+#             */
/*   Updated: 2023/10/30 14:49:55 by mmeier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	char	*p;

	p = b;
	while (len != 0)
	{
		*p++ = (unsigned char)(c);
		len--;
	}
	return (b);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char b[] = "Hello World!";
	int c;
	size_t	len;

	c = '&';
	len = 5;
	printf("own function" "\n");
	printf("%s""\n", ft_memset(b, c, len));
	printf("library functioin" "\n");
	printf("%s", memset(b, c, len));
	return (0);
}
*/

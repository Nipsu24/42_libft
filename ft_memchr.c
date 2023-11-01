/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeier <mmeier@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:02:32 by mmeier            #+#    #+#             */
/*   Updated: 2023/11/01 11:57:37 by mmeier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* typecast int c to unsigned char does not
 * seem to make any difference for the output
 * only comparing n and i as not testing for 
 * 0-terminator*/

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char		*sptr;
	unsigned char	cconvert;
	size_t			i;

	i = 0;
	cconvert = (unsigned char) c;
	sptr = s;
	while (n > i)
	{
		if (sptr[i] == cconvert)
			return ((char *)(sptr + i));
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	const char s[] = "Hello World!";
	int c;
	size_t n;

	c = 'l';
	n = 3;
	printf("own function" "\n");
	printf("%s""\n", ft_memchr(s, c, n));
	printf("library function" "\n");
	printf("%s", memchr(s, c, n));
	return (0);
}
*/

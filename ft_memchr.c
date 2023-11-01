/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeier <mmeier@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:02:32 by mmeier            #+#    #+#             */
/*   Updated: 2023/10/31 17:08:38 by mmeier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*sptr;
	unsigned char	cconvert;
	size_t	i;

	i = 0;
	cconvert = (unsigned char) c;
	sptr = s;
	while (sptr[i] != '\0' && n > i)
	{
		if (sptr[i] == cconvert)
			output = sptr;
			return ((char*)(sptr));
		i++;
	}
	return (NULL);
}
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

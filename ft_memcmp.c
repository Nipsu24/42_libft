/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeier <mmeier@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:13:48 by mmeier            #+#    #+#             */
/*   Updated: 2023/11/01 11:56:03 by mmeier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*s1ptr;
	const char	*s2ptr;
	size_t		i;

	s1ptr = s1;
	s2ptr = s2;
	i = 0;
	while (i < n)
	{
		if (s1ptr[i] > s2ptr[i])
		{
			return (s1ptr[i] - s2ptr[i]);
		}
		else if (s1ptr[i] < s2ptr[i])
		{
			return (s1ptr[i] - s2ptr[i]);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	const char s1[] = "Hello World!";
	const char s2[] = "Hello World!";
	size_t n;

	n = 3;
	printf("own function" "\n");
	printf("%d""\n", ft_memcmp(s1, s2, n));
	printf("library function" "\n");
	printf("%d", memcmp(s1, s2, n));
	return (0);
}
*/

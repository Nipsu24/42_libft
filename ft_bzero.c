/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeier <mmeier@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 14:05:11 by mmeier            #+#    #+#             */
/*   Updated: 2023/10/30 14:45:53 by mmeier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	char	*p;

	p = s;
	while (n > 0)
	{
		*p++ = '\0';
		n--;
	}
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char s[] = "Hello World!";
	size_t	n;

	n = 4;

	printf("own function" "\n");
	ft_bzero(s, n);
	printf("%s""\n", s);

	printf("library function" "\n");
	bzero(s, n);
	printf("%s", s);
	return (0);
}
*/

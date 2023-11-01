/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeier <mmeier@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 09:59:03 by mmeier            #+#    #+#             */
/*   Updated: 2023/10/27 14:22:15 by mmeier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *)(s));
		s++;
	}
	if (*s == c)
		return ((char *)(s));
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	const char s[] = "Hello World!";
	int c;

	c = '\0';
	printf("own function" "\n");
	printf("%s""\n", ft_strchr(s, c));
	printf("library function" "\n");
	printf("%s", strchr(s, c));
	return (0);
}
*/

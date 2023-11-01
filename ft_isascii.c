/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeier <mmeier@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:31:29 by mmeier            #+#    #+#             */
/*   Updated: 2023/10/24 15:55:31 by mmeier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int n)
{
	if (n >= 0 && n <= 127)
		return (1);
	return (0);
}

/*
#include <stdio.h>
int	main(void)
{
	int	a;
	int	b;
	int	c;
	int	d;
	int	e;

	a = '5';
	b = 'c';
	c = 'Z';
	d = ':';
	e = 133;
	printf("%d""\n", ft_isascii(a));
	printf("%d""\n", ft_isascii(b));
	printf("%d""\n", ft_isascii(c));
	printf("%d""\n", ft_isascii(d));
	printf("%d""\n", ft_isascii(e));
	return (0);
}
*/

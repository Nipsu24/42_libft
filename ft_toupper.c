/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeier <mmeier@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:02:14 by mmeier            #+#    #+#             */
/*   Updated: 2023/10/24 15:55:38 by mmeier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int n)
{
	if (n >= 97 && n <= 122)
	{
		n -= 32;
	}
	return (n);
}
/*
#include <stdio.h>
int	main(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = 'a';
	b = 'w';
	c = ':';
	d = 'B';
	printf("%d""\n", ft_toupper(a));
	printf("%d""\n", ft_toupper(b));
	printf("%d""\n", ft_toupper(c));
	printf("%d""\n", ft_toupper(d));
	return (0);
}
*/

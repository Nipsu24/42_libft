/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeier <mmeier@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:03:45 by mmeier            #+#    #+#             */
/*   Updated: 2023/10/24 15:08:10 by mmeier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int n)
{
	if (n >= 32 && n <= 126)
		return (1);
	return (0);
}

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
	d = ' ';
	e = '\n';
	printf("%d""\n", ft_isprint(a));
	printf("%d""\n", ft_isprint(b));
	printf("%d""\n", ft_isprint(c));
	printf("%d""\n", ft_isprint(d));
	printf("%d""\n", ft_isprint(e));
	return (0);
}

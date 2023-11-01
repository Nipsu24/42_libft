/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeier <mmeier@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:04:26 by mmeier            #+#    #+#             */
/*   Updated: 2023/10/24 12:48:30 by mmeier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int n)
{
	if ((n >= 48 && n <= 57) || (n >= 65 && n <= 90) || (n >= 97 && n <= 122))
		return (1);
	return (0);
}

/*#include <stdio.h>
int	main(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = '5';
	b = 'c';
	c = 'Z';
	d = ':';
	printf("%d""\n", ft_isalnum(a));
	printf("%d""\n", ft_isalnum(b));
	printf("%d""\n", ft_isalnum(c));
	printf("%d""\n", ft_isalnum(d));
	return (0);
}
*/

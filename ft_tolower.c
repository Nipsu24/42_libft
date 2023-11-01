/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeier <mmeier@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:02:18 by mmeier            #+#    #+#             */
/*   Updated: 2023/10/25 09:54:31 by mmeier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int n)
{
	if (n >= 65 && n <= 90)
		n += 32;
	return (n);
}

/*#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = 'A';
	b = 'w';
	c = ':';
	d = 'b';
	printf("own function" "\n");
	printf("%d" "->" "%d""\n", a, ft_tolower(a));
	printf("%d" "->" "%d""\n", b, ft_tolower(b));
	printf("%d" "->" "%d""\n", c, ft_tolower(c));
	printf("%d" "->" "%d""\n""\n", d, ft_tolower(d));

	printf("library function" "\n");
	printf("%d" "->" "%d""\n", a, tolower(a));
	printf("%d" "->" "%d""\n", b, tolower(b));
	printf("%d" "->" "%d""\n", c, tolower(c));
	printf("%d" "->" "%d""\n", d, tolower(d));

	return (0);
}
*/

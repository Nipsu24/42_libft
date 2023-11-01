/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeier <mmeier@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:45:03 by mmeier            #+#    #+#             */
/*   Updated: 2023/10/24 12:45:54 by mmeier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int n)
{
	if (n >= 48 && n <= 57)
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

	a = '0';
	b = '9';
	c = '+';
ft_isdigit(a);
printf("%d", ft_isdigit(a));
ft_isdigit(a);
printf("%d", ft_isdigit(b));
ft_isdigit(c);
printf("%d", ft_isdigit(c));
}
*/

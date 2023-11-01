/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeier <mmeier@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:39:45 by mmeier            #+#    #+#             */
/*   Updated: 2023/10/24 12:41:42 by mmeier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
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
	a = 'h';
	b = 'H';
	c = '3';
	ft_isalpha(a);
	printf("%d", ft_isalpha(a));
	ft_isalpha(b);
	printf("%d", ft_isalpha(b));
	ft_isalpha(c);
	printf("%d", ft_isalpha(c));
	return (0);
}
*/

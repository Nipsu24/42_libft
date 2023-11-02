/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeier <mmeier@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:20:12 by mmeier            #+#    #+#             */
/*   Updated: 2023/11/02 10:20:39 by mmeier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
void	ft_checkposneg(const char *str)
{
	int	i;
	int	minus;
	int	plus;
	
	minus = 0;
	plus = 0;
	i = 0;
	while (str[i] == '-' || str[i] == '+')
	{
		minus++;
		plus++;
		i++;
	}
}
*/
int	ft_atoi(const char *str)
{
	int	i;
	int	minus;
	int	number;
	int	plus;

	minus = 0;
	plus = 0;
	number = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
/*	ft_checkposneg(str);*/

	while (str[i] == '-' || str[i] == '+')
	{
		if (minus + plus > 1)
			return (0);
		minus++;
		plus++;
		i++;
	}

	while (str[i] >= 48 && str[i] <= 57)
	{
		number *= 10;
		number += str[i] - 48;
		i++;
	}
	if (minus == 1)
		return (-number);
	return (number);
}

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *str = "214748364718888888ab567";
	printf("%d""\n", ft_atoi(str));
	printf("library function:""\n");
	printf("%d", atoi(str));
	return (0);
}

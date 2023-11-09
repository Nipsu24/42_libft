/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeier <mmeier@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:20:12 by mmeier            #+#    #+#             */
/*   Updated: 2023/11/08 12:18:29 by mmeier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_convertno(char *str, int n)
{
	int	number;

	number = 0;
	while (str[n] >= 48 && str[n] <= 57)
	{
		number *= 10;
		number += str[n] - 48;
		n++;
	}
	return (number);
}

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
	while (str[i] == '-' || str[i] == '+')
	{
		if (minus + plus > 1)
			return (0);
		minus++;
		plus++;
		i++;
	}
	number = ft_convertno(str, i);
	if (minus == 1)
		return (-number);
	return (number);
}

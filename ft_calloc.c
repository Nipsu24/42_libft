/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeier <mmeier@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:22:38 by mmeier            #+#    #+#             */
/*   Updated: 2023/11/02 13:27:06 by mmeier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_bzero.c"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;

	ptr = (char *) malloc (count * size);
	if (ptr == 0)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
/*
#include <stdio.h>
int	main(void)
{
	size_t count;
	size_t size;

	count = 3;
	size = 1000;
	printf("own function:" "\n");
	printf("%s""\n", ft_calloc(count, size));
	printf("library function:""\n");
	printf("%s", calloc(count, size));
	return (0);
}
*/

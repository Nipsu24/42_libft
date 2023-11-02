/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeier <mmeier@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:30:56 by mmeier            #+#    #+#             */
/*   Updated: 2023/11/02 14:07:10 by mmeier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_strlen.c"
#include "ft_memcpy.c"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		len;

	len = ft_strlen(s1);
	ptr = (char *) malloc (len * sizeof(char));
	if (ptr == 0)
		return (NULL);
	return (ft_memcpy(ptr, s1, len));
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char s1[] = "Hello World!";

	printf("own function:" "\n");
	printf("%s""\n", ft_strdup(s1));
	printf("library function:""\n");
	printf("%s", strdup(s1));
	return (0);
}
*/

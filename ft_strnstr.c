/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeier <mmeier@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:26:47 by mmeier            #+#    #+#             */
/*   Updated: 2023/11/01 14:11:25 by mmeier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include "ft_strlen.c"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	size;

	i = 0;
	j = 0;
	size = ft_strlen(needle);
	if (size == 0)
		return ((char *)(haystack));
	while (haystack[i] != '\0' && len > i)
	{
		while ((needle[j] == haystack[i + j]) && (len > i + j))
		{
			if (j == size - 1)
				return ((char *)(haystack + i));
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char haystack[] = "This is the way.";
	char	needle[] = "the";
	size_t len;

	len = 11;
	printf("%s""\n", ft_strnstr(haystack, needle, len));
	printf("library function:""\n");
	printf("%s", strnstr(haystack, needle, len));
	return (0);
}
*/

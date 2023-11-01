/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeier <mmeier@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:26:47 by mmeier            #+#    #+#             */
/*   Updated: 2023/10/26 15:57:15 by mmeier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int	j;
	int	size;

	i = 0;
	j = 0;
	size = 0;
	while (needle[size] != '\0')
		size++;
	if (size == 0)
		return ((char*) (haystack));
	while (haystack[i] != '\0' || len <= i)
	{
		while ((needle[j] == haystack[i + j]) && len < i)
		{
			if (j == size - 1)
				return ((char*) (haystack + i));
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char haystack[] = "This is the way.";
	char	needle[] = "the";
	size_t len;

	len = 12;
	printf("%s""\n", ft_strnstr(haystack, needle, len));
	printf("library function:""\n");
	printf("%s", strnstr(haystack, needle, len));
	return (0);
}

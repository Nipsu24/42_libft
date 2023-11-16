/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeier <mmeier@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 09:21:38 by mmeier            #+#    #+#             */
/*   Updated: 2023/11/16 16:13:16 by mmeier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_subcount(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != 0)
	{
			if (s[i] != 0 && s[i] != c)
				{
					count++;
					while (s[i] != 0 && s[i] != c)
					i++;
				}
		 while (s[i] != 0 && s[i] == c)
				i++;
	}
	return (count);
}
char	**ft_split(char const *s, char c)
{
	char **strings;
	size_t	start;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	start = 0;
	strings = (char**) malloc (sizeof(char *) * (ft_subcount(s, c) + 1));
	if (strings == 0 || s == 0)
		return (NULL);
while (s[i] != 0)
	{
			if (s[i] != 0 && s[i] != c)
				{
					start = i;
					while (s[i] != 0 && s[i] != c)
					i++;
				}
			strings[j] = ft_substr(s, start, (i - start));
				j++;
		 while (s[i] != 0 && s[i] == c)
				i++;
	}
return (strings);
}
/*
int	main(void)
{
				char s[] = "Hallo,World,!";
    char c = ',';
    int i = 0;
    ft_split(s, c);
    while (split[i])
        printf("%s\n", split[i++]);
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeier <mmeier@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:06:00 by mmeier            #+#    #+#             */
/*   Updated: 2023/11/13 16:45:41 by mmeier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(s1);
	if (s1 == '\0' || set == '\0')
		return (0);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (len > 0 && ft_strchr(set, s1[len]))
		len--;
	return (ft_substr(s1, i, len - i + 1));
}

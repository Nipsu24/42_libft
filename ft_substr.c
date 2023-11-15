/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeier <mmeier@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:58:44 by mmeier            #+#    #+#             */
/*   Updated: 2023/11/15 16:21:37 by mmeier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;

	if (start + len > (ft_strlen(s)))
		len = (ft_strlen(s) - start);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	ptr = (char *) malloc ((len + 1) * sizeof(char));
	if (ptr == 0)
		return (NULL);
	ft_memcpy(ptr, &s[start], len);
	ptr[len] = '\0';
	return (ptr);
}

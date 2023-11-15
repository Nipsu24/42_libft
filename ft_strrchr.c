/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeier <mmeier@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:09:50 by mmeier            #+#    #+#             */
/*   Updated: 2023/11/15 15:46:50 by mmeier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*i counts how often c occurs in *s*/
/*if c does not occur in *s Null is to be returned*/
/* r27-28 needed, as function should return 0-terminator*/
char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (*s != '\0')
	{
		if (*s == (char)c)
			i++;
		s++;
	}
	if (*s == (char)c)
		return ((char *)(s));
	if (i == 0)
		return (0);
	while (!(s == 0))
	{
		if (*s == (char)c)
			return ((char *)(s));
		s--;
	}
	return (0);
}

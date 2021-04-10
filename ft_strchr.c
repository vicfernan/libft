/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 15:25:39 by vifernan          #+#    #+#             */
/*   Updated: 2021/04/10 12:34:14 by vifernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*s1;
	int			i;
	size_t		x;

	s1 = s;
	x = ft_strlen(s1);
	i = 0;
	if (s1[i] == '\0')
		return (0);
	if (c == '\0')
		return (char *) s1 + x;
	while (s1[i] != '\0')
	{
		if (s1[i] == c)
			return ((char *) s1 + i);
		i++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 12:13:27 by vifernan          #+#    #+#             */
/*   Updated: 2021/04/10 11:01:35 by vifernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*s1;
	size_t		i;

	s1 = s;
	i = 0;
	while (i < n)
	{
		if (s1[i] == c)
			return ((char *) s1 + i);
		i++;
	}
	return (0);
}
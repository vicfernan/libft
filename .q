/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 17:27:36 by vifernan          #+#    #+#             */
/*   Updated: 2021/04/09 12:51:03 by vifernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t		i;
	char		*d;
	const char	*s;
	size_t		l;

	d = dst;
	s = src;
	i = 0;
	l = 0;
	while (n--)
	{
		if (s[i] == c && l == 0)
			l = i + 1;
		i++;
	}
	if (l == 0)
		return (0);
	i = 0;
	while (d[l] != '\0')
		d[i++] = d[l++];
	while (d[i] != '\0')
		d[i++] = '\0';
	dst = d;
	return (dst);
}

int main()
{
	char dst1[] = "abcdefghijklmnopqrstuvwxyz";
	char src1[] = "string with\200inside !";
	printf("%s\n", ft_memccpy(dst1, src1, '\200', 21));

	char dst2[] = "abcdefghijklmnopqrstuvwxyz";
	char src2[] = "string with\200inside !";
	printf("%s\n", memccpy(dst2, src2, '\200', 21));
	if (!memcmp(dst1, dst2, 21))
			printf("OK\n");
}

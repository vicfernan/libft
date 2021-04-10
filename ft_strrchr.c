/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 15:38:47 by vifernan          #+#    #+#             */
/*   Updated: 2021/04/10 12:47:57 by vifernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	t;
	size_t	i;

	t = ft_strlen(s);
	i = 0;
	if (s[i] == '\0')
		return (0);
	if (c == '\0')
		return (char *) s + t;
	t -= 1;
	while (s[i] != '\0')
	{
		if(s[t] == c)
			return (char *) s + t;
		t--;
		i++;
	}
	return (0);
}
/*
int main()
{
	char	*src = "abbbbbbbb";
	printf("%s\n", ft_strrchr(src, 'b'));
	char	*src1 = "abbbbbbbb";
	printf("%s\n", strrchr(src1, 'b'));
}*/

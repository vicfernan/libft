/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 17:30:23 by vifernan          #+#    #+#             */
/*   Updated: 2021/04/19 16:27:38 by vifernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_returni(char c, const char *s, size_t i)
{
	size_t	size;

	size = 0;
	while (s[i] != c && s[i] != '\0')
	{
		size++;
		i++;
	}
	i = i - size;
	while (size--)
		i++;
	return (i);
}

char	*ft_str(char c, const char *s, size_t i)
{
	size_t	j;
	char	*str;
	size_t	size;

	size = 0;
	while (s[i] != c && s[i] != '\0')
	{
		size++;
		i++;
	}
	str = ft_calloc(size + 1, sizeof(char));
	i = i - size;
	j = 0;
	while (size--)
		str[j++] = s[i++];
	str[j] = '\0';
	return (str);
}

size_t	ft_Tabsize(char const *s, char c)
{
	size_t	i;
	size_t	p;

	i = 0;
	p = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if ((s[i] != c && s[i + 1] == c) || (s[i] != c && s[i + 1] == '\0'))
			p++;
		i++;
	}
	return (p);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	size;
	char	**tab;
	size_t	t;

	if (!s)
		return (0);
	tab = ft_calloc(ft_Tabsize(s, c) + 1, sizeof(char *));
	if (!tab)
		return (0);
	i = 0;
	t = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		size = 0;
		if (i < strlen(s))
		{
			tab[t] = ft_str(c, s, i);
			i = ft_returni(c, s, i);
			t++;
		}
	}
	return (tab);
}
/*
int main()
{
	char *s = "::::::::::::zero:::::::hola:kjkgfd:::::::\n::::::::d::::";

	char **t = ft_split(s, ':');
	printf("---------final---------%s\n", t[0]);
	printf("---------final---------%s\n", t[1]);
	printf("---------final---------%s\n", t[2]);
	printf("---------final---------%s\n", t[3]);
	printf("---------final---------%s\n", t[4]);
	printf("---------final---------%s\n", t[5]);
}*/

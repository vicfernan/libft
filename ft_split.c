/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 17:30:23 by vifernan          #+#    #+#             */
/*   Updated: 2021/04/15 19:26:43 by vifernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_returni(char c, const char *s, size_t i)
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
	str = malloc(size + 1);
	i = i - size;
	j = 0;
	while (size--)
		str[j++] = s[i++];
	str[j] = '\0';
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
	str = malloc(size + 1);
	i = i - size;
	j = 0;
	while (size--)
		str[j++] = s[i++];
	str[j] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	size;
	char	**tab;
	size_t	t;

	if (!s)
		return (0);
	tab = ft_calloc(ft_strlen(s), sizeof(char *));
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 16:35:43 by vifernan          #+#    #+#             */
/*   Updated: 2021/04/12 17:42:33 by vifernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s, char const *set)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	c;
	int		flag;
	
	if (!s || !set)
		return (0);
	str = (char *)malloc(ft_strlen(s));
	i = 0;
	c = 0;
	while (s[i] != '\0')
	{
		j = 0;
		flag = 0;
		while (set[j] != '\0')
		{
			if ((unsigned char)s[i] == (unsigned char)set[j])
				flag++;
			j++;
		}
		if (flag == 0)
		{
			str[c] = s[i];
			c++;
		}
		i++;
	}
	str[c] = '\0';
	return (str);
}
/*
int main()
{
	char *s = "   \t  \n\n \t\t  \n\n\nHello \t  Zlease\n Trim me !\n   \n \n \t\t\n  ";
	char *se = "Hello \t  Please\n Trzim me !";

	printf("%s\n", ft_strtrim(s, se));
}*/

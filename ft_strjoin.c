/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 16:08:16 by vifernan          #+#    #+#             */
/*   Updated: 2021/04/12 16:31:04 by vifernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (s1 && s2)
	{
		str = (char *)malloc((ft_strlen(s1) + ft_strlen(s2)) + 1);
		if (!str)
			return (0);
		i = 0;
		while (s1[i] != '\0')
		{
			str[i] = s1[i];
			i++;
		}
		j = 0;
		while (s2[j] != '\0')
		{
			str[i] = s2[j];
			i++;
			j++;
		}
		str[i] = '\0';
		return (str);
	}
	return (0);
}
/*
int main()
{
	char	*s1 = "1234567890";
	char	*s3 = "1234567890";
	printf("%s\n", ft_strjoin(s1, s3));
}*/
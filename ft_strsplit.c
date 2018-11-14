/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 12:58:09 by allefebv          #+#    #+#             */
/*   Updated: 2018/11/14 14:05:18 by allefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	*ft_strdup_split(char const *src, char c)
{
	int		i;
	char	*dest;

	i = 0;
	while (src[i] != c && src[i] != '\0')
		i++;
	if (!(dest = (char*)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	i = 0;
	while (src[i] != c && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static int	ft_size(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			j++;
		i++;
	}
	return (j);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**s_str;
	int		size_s_str;
	int		i;
	int		j;

	if (s == NULL)
		return (NULL);
	size_s_str = ft_size(s, c);
	if (!(s_str = (char**)malloc(sizeof(char*) * (size_s_str + 1))))
		return (NULL);
	s_str[size_s_str] = 0;
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i - 1] == c || s[i - 1] == '\0'))
		{
			if (!(s_str[j] = ft_strdup_split((s + i), c)))
				return (NULL);
			j++;
		}
		i++;
	}
	return (s_str);
}
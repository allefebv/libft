/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 19:15:46 by allefebv          #+#    #+#             */
/*   Updated: 2018/11/09 19:26:04 by allefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;

	if (!(new = (char*)malloc(sizeof(new) * ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (NULL);
	ft_strcpy(new, (char*)s1);
	ft_strcat(new, (char*)s2);
	return (new);
}
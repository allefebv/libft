/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 13:44:35 by allefebv          #+#    #+#             */
/*   Updated: 2018/11/09 11:12:19 by allefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t len)
{
	unsigned char	*s_2;
	unsigned char	c_2;
	unsigned long	i;

	s_2 = (unsigned char*)s;
	c_2 = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		if (s_2[i] == c_2)
			return (s_2 + (unsigned char)i);
		i++;
	}
	return (NULL);
}
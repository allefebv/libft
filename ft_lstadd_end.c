/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_end.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 17:26:04 by allefebv          #+#    #+#             */
/*   Updated: 2018/11/15 18:18:11 by allefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_end(t_list **alst, t_list *elem)
{
	t_list *end;

	if (alst == NULL || elem == NULL)
		return ;
	end = *alst;
	while (end->next != NULL)
		end = end->next;
	end->next = elem;
	elem->next = NULL;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 20:08:05 by kmatos-s          #+#    #+#             */
/*   Updated: 2023/01/23 19:23:24 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

t_dlist	*ft_dlstnew(void *content)
{
	t_dlist	*list;

	list = ft_salloc(sizeof(t_dlist));
	list->content = content;
	list->next = NULL;
	list->prev = NULL;
	return (list);
}

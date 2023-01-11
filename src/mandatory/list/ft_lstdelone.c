/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 20:20:28 by kmatos-s          #+#    #+#             */
/*   Updated: 2023/01/11 19:43:47 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	temp = lst;
	lst = lst->next;
	del(temp->content);
	free(temp);
}

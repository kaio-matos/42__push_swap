/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 20:08:05 by kmatos-s          #+#    #+#             */
/*   Updated: 2023/01/13 20:27:12 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	ft_lstprint(t_list *list)
{
	ft_printf("{ address: %p, content: %i, next: %p }\n", list, *(int*)list->content, list->next);
}

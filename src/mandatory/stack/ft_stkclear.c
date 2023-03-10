/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stkclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 19:41:38 by kmatos-s          #+#    #+#             */
/*   Updated: 2023/01/23 21:59:31 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	ft_stkclear(t_stack *stack, void (*del)(void *))
{
	if (!stack || !stack->size || !stack->head || !stack->foot || !del)
	{
		free(stack);
		return ;
	}
	ft_dlstclear(&stack->head, del);
	free(stack);
}

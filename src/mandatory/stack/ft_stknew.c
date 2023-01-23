/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stknew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 19:32:26 by kmatos-s          #+#    #+#             */
/*   Updated: 2023/01/23 19:24:27 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

t_stack	*ft_stknew(void *content)
{
	t_stack	*stack;

	stack = ft_salloc(sizeof(t_stack));
	stack->head = ft_dlstnew(content);
	stack->foot = stack->head;
	stack->size = 1;
	return (stack);
}

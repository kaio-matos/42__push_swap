/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stkinit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 19:55:34 by kmatos-s          #+#    #+#             */
/*   Updated: 2023/01/23 19:23:34 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	ft_stkinit(t_stack **stack)
{
	*stack = ft_salloc(sizeof(t_stack));
	(*stack)->head = NULL;
	(*stack)->foot = NULL;
	(*stack)->size = 0;
}

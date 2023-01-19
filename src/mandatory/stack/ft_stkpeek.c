/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stkpeek.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 19:41:38 by kmatos-s          #+#    #+#             */
/*   Updated: 2023/01/19 19:37:14 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	*ft_stkpeek_head(t_stack *stack)
{
	return (stack->head->content);
}

void	*ft_stkpeek_foot(t_stack *stack)
{
	return (stack->foot->content);
}

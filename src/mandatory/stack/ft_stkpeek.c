/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stkpeek.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 19:41:38 by kmatos-s          #+#    #+#             */
/*   Updated: 2023/01/23 22:00:33 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	*ft_stkpeek_head(t_stack *stack)
{
	if (!stack->head)
		return (NULL);
	return (stack->head->content);
}

void	*ft_stkpeek_foot(t_stack *stack)
{
	if (!stack->foot)
		return (NULL);
	return (stack->foot->content);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stkis_empty.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 19:41:38 by kmatos-s          #+#    #+#             */
/*   Updated: 2023/01/19 19:36:42 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

t_bool	ft_stkis_empty(t_stack *stack)
{
	if (!stack || !stack->head || !stack->foot || !stack->size)
		return (TRUE);
	return (FALSE);
}

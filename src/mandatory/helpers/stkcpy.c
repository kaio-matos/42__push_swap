/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stkcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 19:55:34 by kmatos-s          #+#    #+#             */
/*   Updated: 2023/01/28 09:23:34 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

t_stack	*stkcpy(t_stack **stack)
{
	t_stack	*old;
	t_stack	*copy;
	t_stack	*temp;

	ft_stkinit(&old);
	ft_stkinit(&copy);
	ft_stkinit(&temp);
	while ((*stack)->head)
		send(*stack, temp);
	while (temp->head)
	{
		ft_stkpush(old, new_int(get_int(ft_stkpeek_head(temp))));
		ft_stkpush(copy, new_int(get_int(ft_stkpeek_head(temp))));
		ft_stkpop(temp, &free);
	}
	ft_stkclear(temp, &free);
	ft_stkclear(*stack, &free);
	*stack = old;
	return (copy);
}

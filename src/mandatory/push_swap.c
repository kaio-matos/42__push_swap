/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 20:30:58 by kmatos-s          #+#    #+#             */
/*   Updated: 2023/01/27 20:52:39 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	push_swap(t_push_swap *ps)
{
	debug_log("Starting Sorting...\n");
	if (ps->a->size <= 10)
		s__small_stack(ps);
	else
		s__big_stack(ps);
	if (!is_stkascend(&ps->a))
		ft_exterr("Stack A: isn't sorted\n");
	if (!ft_stkis_empty(ps->b))
		ft_exterr("Stack B: isn't empty\n");
}

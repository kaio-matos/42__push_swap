/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 20:30:58 by kmatos-s          #+#    #+#             */
/*   Updated: 2023/02/09 20:49:39 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	push_swap(t_push_swap *ps)
{
	debug_log("Starting Sorting...\n");
	if (ps->a->size <= 3)
		s__xs_stack(ps);
	else
		s__big_stack(ps);
	if (VERBOSE)
	{
		if (!is_stkascend(&ps->a))
			safely_throw_error(ps, "Stack A: isn't sorted\n");
		if (!ft_stkis_empty(ps->b))
			safely_throw_error(ps, "Stack B: isn't empty\n");
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s__sm_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 20:35:47 by kmatos-s          #+#    #+#             */
/*   Updated: 2023/02/15 19:54:12 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	s__sm_stack(t_push_swap *ps)
{
	int	a;
	int	b;

	pb(ps);
	pb(ps);
	s__xs_stack(ps);
	while (ps->b->head)
	{
		a = get_int(ft_stkpeek_head(ps->a));
		b = get_int(ft_stkpeek_head(ps->b));
		pa(ps);
		if (b > a)
			ra(ps);
	}
}

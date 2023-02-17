/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s__sm_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 20:35:47 by kmatos-s          #+#    #+#             */
/*   Updated: 2023/02/17 19:59:08 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	handle_stack_b_sort(int a, int b, t_push_swap *ps);

void	s__sm_stack(t_push_swap *ps)
{
	int	a;
	int	b;

	while (ps->a->size != 3)
	{
		if (get_int(ft_stkpeek_head(ps->a)) == 2)
			sa(ps);
		pb(ps);
	}
	s__xs_stack(ps);
	while (ps->b->head)
	{
		a = get_int(ft_stkpeek_head(ps->a));
		b = get_int(ft_stkpeek_head(ps->b));
		handle_stack_b_sort(a, b, ps);
	}
}

void	handle_stack_b_sort(int a, int b, t_push_swap *ps)
{
	if (b > a)
	{
		if (b > get_int(ps->a->foot->content))
		{
			pa(ps);
			ra(ps);
		}
		else if (b > get_int(ps->a->foot->next->content))
		{
			rra(ps);
			pa(ps);
			ra(ps);
			ra(ps);
		}
		else if (b < get_int(ps->a->head->prev->content))
		{
			pa(ps);
			sa(ps);
		}
		else
			pa(ps);
	}
	else if (b < a)
		pa(ps);
}

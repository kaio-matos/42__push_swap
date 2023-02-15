/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s__xs_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 20:35:47 by kmatos-s          #+#    #+#             */
/*   Updated: 2023/02/15 19:42:13 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

static void	handle_a_bigger_than_b(t_push_swap *ps);
static void	handle_a_less_than_b(t_push_swap *ps);

void	s__xs_stack(t_push_swap *ps)
{
	if (ps->a->size == 2)
	{
		sa(ps);
		return ;
	}
	handle_a_bigger_than_b(ps);
	handle_a_less_than_b(ps);
}

static void	handle_a_bigger_than_b(t_push_swap *ps)
{
	int	a;
	int	b;
	int	c;

	a = get_int(ps->a->head->content);
	b = get_int(ps->a->head->prev->content);
	c = get_int(ps->a->head->prev->prev->content);
	if (a > b)
	{
		if (b < c && a < c)
			sa(ps);
		if (b < c && a > c)
			ra(ps);
		if (b > c)
		{
			sa(ps);
			rra(ps);
		}
	}
}

static void	handle_a_less_than_b(t_push_swap *ps)
{
	int	a;
	int	b;
	int	c;

	a = get_int(ps->a->head->content);
	b = get_int(ps->a->head->prev->content);
	c = get_int(ps->a->head->prev->prev->content);
	if (a < b)
	{
		if (b > c && a < c)
		{
			sa(ps);
			ra(ps);
		}
		if (a > c)
			rra(ps);
	}
}

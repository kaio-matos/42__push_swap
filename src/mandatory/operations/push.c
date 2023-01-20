/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 20:32:17 by kmatos-s          #+#    #+#             */
/*   Updated: 2023/01/19 21:54:37 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	pa(t_push_swap *ps)
{
	ft_stksend(ps->b, ps->a);
	ft_printf("pa\n");
}

void	pb(t_push_swap *ps)
{
	ft_stksend(ps->a, ps->b);
	ft_printf("pb\n");
}

void	ft_stksend(t_stack *from, t_stack *to)
{
	int	content;

	if (ft_stkis_empty(from))
		return ;
	content = get_int(from->head->content);
	ft_stkpop(from, &free);
	ft_stkpush(to, new_int(content));
}

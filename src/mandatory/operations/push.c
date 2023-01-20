/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 20:32:17 by kmatos-s          #+#    #+#             */
/*   Updated: 2023/01/20 19:41:34 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

t_bool	pa(t_push_swap *ps)
{
	if (ft_stksend(ps->b, ps->a))
		return (TRUE);
	ft_printf("pa\n");
	return (FALSE);
}

t_bool	pb(t_push_swap *ps)
{
	if (ft_stksend(ps->a, ps->b))
		return (TRUE);
	ft_printf("pb\n");
	return (FALSE);
}

t_bool	ft_stksend(t_stack *from, t_stack *to)
{
	int	content;

	if (ft_stkis_empty(from))
		return (TRUE);
	content = get_int(from->head->content);
	ft_stkpop(from, &free);
	ft_stkpush(to, new_int(content));
	return (FALSE);
}

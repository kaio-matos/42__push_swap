/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 20:32:17 by kmatos-s          #+#    #+#             */
/*   Updated: 2023/01/20 21:50:00 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

t_bool	sa(t_push_swap *ps)
{
	if (swap(ps->a))
		return (TRUE);
	ft_printf("sa\n");
	return (FALSE);
}

t_bool	sb(t_push_swap *ps)
{
	if (swap(ps->b))
		return (TRUE);
	ft_printf("sb\n");
	return (FALSE);
}

t_bool	ss(t_push_swap *ps)
{
	if (swap(ps->a) && swap(ps->b)) // TODO: Danger operation, can cause some issue by not executing the second operation
		return (TRUE);
	ft_printf("ss\n");
	return (FALSE);
}

t_bool	swap(t_stack *stack)
{
	int	content_head;
	int	content_second;

	if (ft_stkis_empty(stack) || stack->size <= 1)
		return (TRUE);
	content_head = get_int(ft_stkpeek_head(stack));
	ft_stkpop(stack, &free);
	content_second = get_int(ft_stkpeek_head(stack));
	ft_stkpop(stack, &free);
	ft_stkpush(stack, new_int(content_head));
	ft_stkpush(stack, new_int(content_second));
	return (FALSE);
}

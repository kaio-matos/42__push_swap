/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 20:32:17 by kmatos-s          #+#    #+#             */
/*   Updated: 2023/01/20 19:40:14 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

t_bool	sa(t_push_swap *ps)
{
	if (ft_stkswap(ps->a))
		return (TRUE);
	ft_printf("sa\n");
	return (FALSE);
}

t_bool	sb(t_push_swap *ps)
{
	if (ft_stkswap(ps->b))
		return (TRUE);
	ft_printf("sb\n");
	return (FALSE);
}

t_bool	ss(t_push_swap *ps)
{
	if (ft_stkswap(ps->a) && ft_stkswap(ps->b))
		return (TRUE);
	ft_printf("ss\n");
	return (FALSE);
}

t_bool	ft_stkswap(t_stack *stack)
{
	int	content_head;
	int	content_second;

	if (ft_stkis_empty(stack) || stack->size <= 1)
		return (TRUE);
	content_head = get_int(stack->head->content);
	ft_stkpop(stack, &free);
	content_second = get_int(stack->head->content);
	ft_stkpop(stack, &free);
	ft_stkpush(stack, new_int(content_head));
	ft_stkpush(stack, new_int(content_second));
	return (FALSE);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 20:32:17 by kmatos-s          #+#    #+#             */
/*   Updated: 2023/01/21 10:50:53 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

t_bool	ra(t_push_swap *ps)
{
	if (rotate(ps->a))
		return (TRUE);
	ft_printf("ra\n");
	return (FALSE);
}

t_bool	rb(t_push_swap *ps)
{
	if (rotate(ps->b))
		return (TRUE);
	ft_printf("rb\n");
	return (FALSE);
}

t_bool	rr(t_push_swap *ps)
{
	if (rotate(ps->a) && rotate(ps->b)) // TODO: Danger operation, can cause some issue by not executing the second operation
		return (TRUE);
	ft_printf("rr\n");
	return (FALSE);
}

t_bool	rra(t_push_swap *ps)
{
	if (reverse_rotate(ps->a))
		return (TRUE);
	ft_printf("rra\n");
	return (FALSE);
}

t_bool	rrb(t_push_swap *ps)
{
	if (reverse_rotate(ps->b))
		return (TRUE);
	ft_printf("rrb\n");
	return (FALSE);
}

t_bool	rrr(t_push_swap *ps)
{
	if (and(reverse_rotate(ps->a), reverse_rotate(ps->b)))
		return (TRUE);
	ft_printf("rrr\n");
	return (FALSE);
}

t_bool	rotate(t_stack *stack)
{
	t_stack	*placeholder;
	int		head_content;

	if (ft_stkis_empty(stack) || stack->size <= 1)
		return (TRUE);
	ft_stkinit(&placeholder);
	head_content = get_int(ft_stkpeek_head(stack));
	ft_stkpop(stack, &free);
	while (stack->head)
		send(stack, placeholder);
	ft_stkpush(stack, new_int(head_content));
	while (placeholder->head)
		send(placeholder, stack);
	return (FALSE);
}

t_bool	reverse_rotate(t_stack *stack)
{
	t_stack	*placeholder;
	int		foot_content;

	if (ft_stkis_empty(stack) || stack->size <= 1)
		return (TRUE);
	ft_stkinit(&placeholder);
	while (stack->head)
		send(stack, placeholder);
	foot_content = get_int(ft_stkpeek_head(placeholder));
	ft_stkpop(placeholder, &free);
	while (placeholder->head)
		send(placeholder, stack);
	ft_stkpush(stack, new_int(foot_content));
	return (FALSE);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 20:32:17 by kmatos-s          #+#    #+#             */
/*   Updated: 2023/01/19 21:34:32 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	sa(t_push_swap *ps)
{
	ft_stkswap(ps->a);
	ft_printf("sa\n");
}

void	sb(t_push_swap *ps)
{
	ft_stkswap(ps->a);
	ft_printf("sb\n");
}

void	ss(t_push_swap *ps)
{
	ft_stkswap(ps->a);
	ft_stkswap(ps->b);
	ft_printf("ss\n");
}

void	ft_stkswap(t_stack *stack)
{
	int	content_head;
	int	content_second;

	if (!stack || !stack->head || !stack->foot || stack->size <= 1)
		return ;
	content_head = get_int(stack->head->content);
	ft_stkpop(stack, &free);
	content_second = get_int(stack->head->content);
	ft_stkpop(stack, &free);
	ft_stkpush(stack, new_int(content_head));
	ft_stkpush(stack, new_int(content_second));
}

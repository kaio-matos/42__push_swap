/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 19:36:18 by kmatos-s          #+#    #+#             */
/*   Updated: 2023/01/28 09:16:29 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	handle_stk_fill(t_stack **a, char **stack);

int	main(int argc, char **argv)
{
	t_push_swap	*ps;
	char		**stack;

	v__program(argc, argv);
	ps = ft_salloc(sizeof(t_push_swap));
	handle_stk_fill(&ps->a, ++argv);
	ft_stkinit(&ps->b);
	v__push_swap(ps);
	push_swap(ps);
	free_program(ps);
}

void	handle_stk_fill(t_stack **a, char **stack)
{
	int	length;

	ft_stkinit(a);
	length = ft_mtxlen(stack) - 1;
	while (length >= 0)
	{
		ft_stkpush(*a, new_int(ft_atoi(stack[length])));
		length--;
	}
}

void	free_program(t_push_swap *ps)
{
	ft_stkclear(ps->a, &free);
	ft_stkclear(ps->b, &free);
	free(ps);
}

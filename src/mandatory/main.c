/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 19:36:18 by kmatos-s          #+#    #+#             */
/*   Updated: 2023/01/20 21:58:34 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	initiate_stack(t_stack **stack, int value);

int	main(int argc, char **argv, char **envp)
{
	t_push_swap	*ps;

	ps = malloc(sizeof(t_push_swap));
	if (!ps)
	{
		ft_printf(ERROR);
		return (1);
	}
	initiate_stack(&ps->a, 0);
	ft_stkinit(&ps->b);

	ft_stkprint(ps->a);
	ft_printf("------\n");

	sa(ps);
	ft_stkprint(ps->a);
	ft_stkprint(ps->b);
	ft_printf("------\n");

	pb(ps);
	pb(ps);
	pb(ps);
	ft_stkprint(ps->a);
	ft_stkprint(ps->b);
	ft_printf("------\n");

	ra(ps);
	rb(ps);
	ft_stkprint(ps->a);
	ft_stkprint(ps->b);
	ft_printf("------\n");

	rra(ps);
	rrb(ps);
	ft_stkprint(ps->a);
	ft_stkprint(ps->b);
	ft_printf("------\n");

	sa(ps);
	ft_stkprint(ps->a);
	ft_stkprint(ps->b);
	ft_printf("------\n");

	pa(ps);
	pa(ps);
	pa(ps);
	ft_stkprint(ps->a);
	ft_stkprint(ps->b);
	ft_printf("------\n");
}

void	initiate_stack(t_stack **stack, int value)
{
	*stack = ft_stknew(new_int(8 + value));
	ft_stkpush(*stack, new_int(5 + value));
	ft_stkpush(*stack, new_int(6 + value));
	ft_stkpush(*stack, new_int(3 + value));
	ft_stkpush(*stack, new_int(1 + value));
	ft_stkpush(*stack, new_int(2 + value));
}

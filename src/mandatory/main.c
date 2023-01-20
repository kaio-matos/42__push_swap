/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 19:36:18 by kmatos-s          #+#    #+#             */
/*   Updated: 2023/01/19 21:33:59 by kmatos-s         ###   ########.fr       */
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
	initiate_stack(&ps->b, 20);
}

void	initiate_stack(t_stack **stack, int value)
{
	*stack = ft_stknew(new_int(5 + value));
	ft_stkpush(*stack, new_int(10 + value));
	ft_stkpush(*stack, new_int(15 + value));
	ft_stkpush(*stack, new_int(25 + value));
}

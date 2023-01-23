/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 19:36:18 by kmatos-s          #+#    #+#             */
/*   Updated: 2023/01/23 19:21:46 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	handle_program_validation(int argc, char **argv);
void	handle_stk_fill(t_stack **a, char **stack);

int	main(int argc, char **argv)
{
	t_push_swap	*ps;
	char		**stack;

	handle_program_validation(argc, argv);
	ps = ft_salloc(sizeof(t_push_swap));
	handle_stk_fill(&ps->a, ++argv);
	ft_stkprint(ps->a);
}

void	handle_program_validation(int argc, char **argv)
{
	if (argc <= 1)
		ft_exterr("Missing arguments\n");
	while (*(++argv))
		if (!ft_isdigit(**argv))
			ft_exterr("Bad arguments, use only digits\n");
}

void	handle_stk_fill(t_stack **a, char **stack)
{
	ft_stkinit(a);
	while (*stack)
	{
		ft_stkpush(*a, new_int(ft_atoi(*stack)));
		stack++;
	}
}

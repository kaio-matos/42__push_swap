/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 19:36:18 by kmatos-s          #+#    #+#             */
/*   Updated: 2023/01/23 20:57:00 by kmatos-s         ###   ########.fr       */
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
		if (!ft_isinteger(*argv))
			ft_exterr("Bad arguments, not an integer\n");
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

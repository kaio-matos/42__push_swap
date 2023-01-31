/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_stkbetween.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 21:02:32 by kmatos-s          #+#    #+#             */
/*   Updated: 2023/01/30 21:52:21 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

t_bool	is_stkbetween(t_stack **stack, int min, int max)
{
	debug_log("\nBAD IMPLEMENTATION: is_stkbetween\n");
	t_stack	*new;
	int		content;

	new = stkcpy(stack);
	content = get_int(ft_stkpeek_head(new));
	while (new->size != 0 && content > min && content < max)
	{
		ft_stkpop(new, &free);
		if (new->size != 0)
			content = get_int(ft_stkpeek_head(new));
	}
	if (ft_stkis_empty(new))
	{
		ft_stkclear(new, &free);
		return (TRUE);
	}
	ft_stkclear(new, &free);
	return (FALSE);
}

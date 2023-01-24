/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_stkascend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 21:00:30 by kmatos-s          #+#    #+#             */
/*   Updated: 2023/01/24 19:40:02 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

t_bool	is_stkascend(t_stack **stack)
{
	t_stack	*new;
	int		prev;

	new = stkcpy(stack);
	while (new->head)
	{
		prev = get_int(ft_stkpeek_head(new));
		ft_stkpop(new, &free);
		if (ft_stkpeek_head(new) && prev > get_int(ft_stkpeek_head(new)))
		{
			ft_stkclear(new, &free);
			return (FALSE);
		}
	}
	ft_stkclear(new, &free);
	return (TRUE);
}


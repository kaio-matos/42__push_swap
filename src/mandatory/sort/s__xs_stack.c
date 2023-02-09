/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s__xs_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 20:35:47 by kmatos-s          #+#    #+#             */
/*   Updated: 2023/02/09 20:05:48 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	s__xs_stack(t_push_swap *ps)
{
	void	*a_content;
	void	*b_content;

	pb(ps);
	a_content = ft_stkpeek_head(ps->a);
	b_content = ft_stkpeek_head(ps->b);
	if (get_int(b_content) < get_int(a_content))
	{
		sa(ps);
		pa(ps);
	}
	else
	{
		pa(ps);
		sa(ps);
	}
}

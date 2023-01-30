/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s__small_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 20:35:47 by kmatos-s          #+#    #+#             */
/*   Updated: 2023/01/30 19:37:49 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	s__small_stack(t_push_swap *ps)
{
	a__countsort(ps);
	ft_stkprint(ps->a);
	ft_stkprint(ps->b);
}

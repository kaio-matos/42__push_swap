/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   v__push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 20:24:18 by kmatos-s          #+#    #+#             */
/*   Updated: 2023/01/30 19:53:03 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	v__push_swap(t_push_swap *ps)
{
	if (is_stkascend(&ps->a))
		safely_throw_error(ps, "Stack A is already in ascend order\n");
}

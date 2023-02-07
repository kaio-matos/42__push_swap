/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a__radixsort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 20:24:19 by kmatos-s          #+#    #+#             */
/*   Updated: 2023/02/07 20:15:58 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	radix_operate(t_push_swap *ps, int i);

void	a__radixsort(t_push_swap *ps)
{
	int	i;
	int	j;
	int	max_num;
	int	max_bits;
	int	size;

	i = 0;
	max_bits = 0;
	size = ps->a->size;
	max_num = size - 1;
	while ((max_num >> max_bits) != 0)
		++max_bits;
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			radix_operate(ps, i);
			j++;
		}
		while (!ft_stkis_empty(ps->b))
			pa(ps);
		i++;
	}
}

void	radix_operate(t_push_swap *ps, int i)
{
	if (((get_int(ft_stkpeek_head(ps->a)) >> i) & 1) == 1)
		ra(ps);
	else
		pb(ps);
}

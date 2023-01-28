/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a__countsort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 20:46:33 by kmatos-s          #+#    #+#             */
/*   Updated: 2023/01/27 21:54:57 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	a__countsort(t_push_swap *ps)
{
	int	i;
	int	j;
	int	*boxes[DECIMAL_LENGTH];

	i = DECIMAL_LENGTH - 1;
	j = 0;
	init_boxes(boxes);
	fill_boxes(boxes, ps);
	while (ps->b->head && i != 0)
	{
		j = 0;
		while (boxes[i][0] == NULL_BOX)
			i--;
		while (boxes[i][j] != NULL_BOX)
		{
			find_box_in_stack(boxes[i][j], ps, 'b');
			pa(ps);
			j++;
		}
		i--;
	}
	clear_boxes(boxes);
}

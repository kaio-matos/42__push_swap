/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a__countsort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 20:46:33 by kmatos-s          #+#    #+#             */
/*   Updated: 2023/01/30 20:46:57 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	a__countsort(t_push_swap *ps)
{
	int		i;
	t_list	*boxes[DECIMAL_LENGTH];
	t_list	*temp;

	i = DECIMAL_LENGTH - 1;
	init_boxes(boxes);
	fill_boxes(boxes, ps);
	while (ps->b->head && i >= 0)
	{
		while (boxes[i]->content == NULL)
			i--;
		temp = boxes[i];
		while (temp != NULL)
		{
			find_box_in_stack(get_int(temp->content), ps, 'b');
			pa(ps);
			temp = temp->next;
		}
		i--;
	}
	clear_boxes(boxes);
}

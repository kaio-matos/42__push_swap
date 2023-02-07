/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a__countsort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 20:46:33 by kmatos-s          #+#    #+#             */
/*   Updated: 2023/02/07 20:20:51 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	count_sortboxes(t_push_swap *ps, t_list *boxes[DECIMAL_LENGTH]);

void	a__countsort(t_push_swap *ps)
{
	t_list	*boxes[DECIMAL_LENGTH];

	if (ft_stkis_empty(ps->a))
		return (safely_throw_error(ps, "Bad args: Stack A was empty\n"));
	if (!ft_stkis_empty(ps->b))
		return (safely_throw_error(ps, "Bad args: Stack B wasn't empty\n"));
	if (!is_stkbetween(&ps->a, -1, DECIMAL_LENGTH))
		return (safely_throw_error(ps, "Bad args: The count sort algorithm only\
				works with numbers between 0 and 9\n"));
	init_boxes(boxes);
	fill_boxes(boxes, ps);
	count_sortboxes(ps, boxes);
	clear_boxes(boxes);
}

void	count_sortboxes(t_push_swap *ps, t_list *boxes[DECIMAL_LENGTH])
{
	int		i;
	t_list	*temp;

	i = DECIMAL_LENGTH - 1;
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
}

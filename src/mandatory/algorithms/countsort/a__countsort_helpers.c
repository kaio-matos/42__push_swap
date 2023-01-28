/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a__countsort_helpers.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 21:54:15 by kmatos-s          #+#    #+#             */
/*   Updated: 2023/01/27 22:14:33 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	init_boxes(int **boxes)
{
	int	i;

	i = 0;
	while (i < DECIMAL_LENGTH)
	{
		boxes[i] = ft_salloc(sizeof(int *));
		boxes[i][0] = NULL_BOX;
		i++;
	}
}

void	fill_boxes(int **boxes, t_push_swap *ps)
{
	int	value;

	while (ps->a->head)
	{
		value = get_int(ft_stkpeek_head(ps->a));
		append_to_boxes(boxes[value], value);
		pb(ps);
	}
}

void	clear_boxes(int **boxes)
{
	int	i;

	i = 0;
	while (i < DECIMAL_LENGTH)
	{
		free(boxes[i]);
		i++;
	}
}

void	append_to_boxes(int *box, int val)
{
	while (*box != NULL_BOX)
		box++;
	*box = val;
	box++;
	*box = NULL_BOX;
}

void	find_box_in_stack(int box_value, t_push_swap *ps, char c)
{
	if (c == 'a')
	{
		while (box_value != get_int(ft_stkpeek_head(ps->a)))
			ra(ps);
	}
	else if (c == 'b')
	{
		while (box_value != get_int(ft_stkpeek_head(ps->b)))
			rb(ps);
	}
}

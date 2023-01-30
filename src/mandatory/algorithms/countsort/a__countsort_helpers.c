/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a__countsort_helpers.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 21:54:15 by kmatos-s          #+#    #+#             */
/*   Updated: 2023/01/30 20:47:55 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	init_boxes(t_list *boxes[DECIMAL_LENGTH])
{
	int	i;

	i = 0;
	while (i < DECIMAL_LENGTH)
	{
		boxes[i] = ft_lstnew(NULL);
		i++;
	}
}

void	fill_boxes(t_list *boxes[DECIMAL_LENGTH], t_push_swap *ps)
{
	int	value;

	while (ps->a->head)
	{
		value = get_int(ft_stkpeek_head(ps->a));
		if (boxes[value]->content == NULL)
		{
			ft_lstdelone(boxes[value], &free);
			boxes[value] = ft_lstnew(new_int(value));
		}
		else
			ft_lstadd_back(&boxes[value], ft_lstnew(new_int(value)));
		pb(ps);
	}
}

void	clear_boxes(t_list *boxes[DECIMAL_LENGTH])
{
	int	i;

	i = 0;
	while (i < DECIMAL_LENGTH)
	{
		ft_lstclear(&boxes[i], &free);
		i++;
	}
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

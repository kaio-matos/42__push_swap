/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a__bubblesort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 20:26:29 by kmatos-s          #+#    #+#             */
/*   Updated: 2023/01/31 22:03:30 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	swap_void(void **value, void **new)
{
	void	*swap;

	swap = *value;
	*value = *new;
	*new = swap;
}

void	a__bubblesort(t_dlist *numbers)
{
	void	*swap;
	t_dlist	*saved;
	t_dlist	*changed;

	saved = numbers;
	while (saved)
	{
		if (saved->next)
		{
			changed = saved->next;
			while (changed)
			{
				if (get_int(saved->content) > get_int(changed->content))
					swap_void(&saved->content, &changed->content);
				changed = changed->next;
			}
		}
		saved = saved->next;
	}
}

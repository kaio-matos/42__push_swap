/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p__int_to_pair.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 19:56:07 by kmatos-s          #+#    #+#             */
/*   Updated: 2023/02/08 21:13:29 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

t_dlist	*p__int_to_pair(t_dlist *numbers)
{
	t_dlist	*dict;
	int		i;

	dict = NULL;
	i = 0;
	while (numbers)
	{
		dictadd(&dict, new_pair(i, new_int(get_int(numbers->content))));
		i++;
		numbers = numbers->next;
	}
	return (dict);
}

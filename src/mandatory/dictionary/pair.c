/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pair.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 21:37:42 by kmatos-s          #+#    #+#             */
/*   Updated: 2023/02/03 20:26:52 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

t_pair	*new_pair(int key, void *value)
{
	t_pair	*map;

	map = ft_salloc(sizeof(t_pair));
	map->key = key;
	map->value = value;
	return (map);
}

t_pair	*get_pair(void *pointer)
{
	return ((t_pair *)pointer);
}

void	swap_pair(t_pair *a, t_pair *b)
{
	t_pair	temp;

	if (!a || !b || !a->value || !b->value)
		return ;
	temp.key = a->key;
	temp.value = a->value;
	a->key = b->key;
	a->value = b->value;
	b->key = temp.key;
	b->value = temp.value;
}

void	print_pair(t_pair pair)
{
	debug_log("{ key: %i,  value: %i }\n", pair.key, get_int(pair.value));
}

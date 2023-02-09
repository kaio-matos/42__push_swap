/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictionary.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 21:29:24 by kmatos-s          #+#    #+#             */
/*   Updated: 2023/02/08 22:03:50 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	dictadd(t_dlist **dict, t_pair *pair)
{
	if (!pair)
		return ;
	ft_dlstadd_back(dict, ft_dlstnew(pair));
}

t_pair	*dictfind(t_dlist *dict, int key)
{
	t_pair	*kv;

	while (dict)
	{
		kv = get_pair(dict->content);
		if (dict->content && kv->key == key)
			return (kv);
		dict = dict->next;
	}
	return (NULL);
}

void	dictprint(t_dlist *dict)
{
	t_pair	*kv;

	while (dict)
	{
		kv = get_pair(dict->content);
		if (kv->value)
			print_pair(*kv);
		dict = dict->next;
	}
}

void	dictclear(t_dlist **dict, void (*del)(void *))
{
	t_dlist	*temp;
	t_pair	*kv;

	temp = *dict;
	while (temp)
	{
		kv = get_pair(temp->content);
		del(kv->value);
		temp = temp->next;
	}
	ft_dlstclear(dict, &free);
}

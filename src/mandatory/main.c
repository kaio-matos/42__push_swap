/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 19:36:18 by kmatos-s          #+#    #+#             */
/*   Updated: 2023/02/15 19:39:18 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	init_stacks(t_push_swap *ps, t_dlist *unsorted);
t_dlist	*prepare(char **numbers);
t_dlist	*unsort_dict(t_dlist *original, t_dlist *dict);

int	main(int argc, char **argv)
{
	t_push_swap	*ps;
	t_dlist		*unsorted_dict;
	char		**numbers;

	numbers = v__program(argc, argv);
	unsorted_dict = prepare(numbers);
	ft_free_matrix(numbers);
	ps = ft_salloc(sizeof(t_push_swap));
	init_stacks(ps, unsorted_dict);
	dictclear(&unsorted_dict, &free);
	v__push_swap(ps);
	push_swap(ps);
	free_program(ps);
}

t_dlist	*prepare(char **numbers)
{
	t_dlist	*dl_sorted_numbers;
	t_dlist	*dl_numbers;
	t_dlist	*dict;
	t_dlist	*unsorted_dict;

	dl_numbers = p__strarr_to_dlst(numbers);
	dl_sorted_numbers = p__strarr_to_dlst(numbers);
	a__bubblesort(dl_sorted_numbers);
	dict = p__int_to_pair(dl_sorted_numbers);
	unsorted_dict = unsort_dict(dl_numbers, dict);
	dictclear(&dict, &free);
	ft_dlstclear(&dl_sorted_numbers, &free);
	ft_dlstclear(&dl_numbers, &free);
	return (unsorted_dict);
}

t_dlist	*unsort_dict(t_dlist *original, t_dlist *dict)
{
	t_dlist	*i_dict;
	t_dlist	*i_dict_unsorted;
	t_pair	*kv;

	i_dict = dict;
	i_dict_unsorted = NULL;
	while (original)
	{
		i_dict = dict;
		while (i_dict)
		{
			kv = get_pair(i_dict->content);
			if (get_int(original->content) == get_int(kv->value))
			{
				ft_dlstadd_back(
					&i_dict_unsorted,
					ft_dlstnew(new_pair(kv->key, new_int(get_int(kv->value)))));
				break ;
			}
			i_dict = i_dict->next;
		}
		original = original->next;
	}
	return (i_dict_unsorted);
}

void	init_stacks(t_push_swap *ps, t_dlist *unsorted)
{
	t_pair	*pair;

	ft_stkinit(&ps->a);
	ft_stkinit(&ps->b);
	unsorted = ft_dlstlast(unsorted);
	while (unsorted)
	{
		pair = get_pair(unsorted->content);
		ft_stkpush(ps->a, new_int(pair->key));
		unsorted = unsorted->prev;
	}
}

void	free_program(t_push_swap *ps)
{
	ft_stkclear(ps->a, &free);
	ft_stkclear(ps->b, &free);
	free(ps);
}

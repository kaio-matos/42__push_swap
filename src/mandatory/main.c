/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 19:36:18 by kmatos-s          #+#    #+#             */
/*   Updated: 2023/02/03 22:00:33 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	handle_stk_fill(t_stack **a, char **stack);
t_dlist	*prepare(char **numbers);
t_dlist	*reorganize_dict(t_dlist *original, t_dlist *dict);

int	main(int argc, char **argv)
{
	t_push_swap	*ps;
	t_dlist		*dict_unsorted;

	v__program(argc, argv);

	dict_unsorted = prepare(++argv);
	ft_dlstclear(&dict_unsorted, &free);

	ps = ft_salloc(sizeof(t_push_swap));
	handle_stk_fill(&ps->a, ++argv);
	ft_stkinit(&ps->b);
	v__push_swap(ps);
	push_swap(ps);
	free_program(ps);
}

t_dlist	*prepare(char **numbers)
{
	t_dlist	*dl_sorted_numbers;
	t_dlist	*dl_numbers;
	t_dlist	*dict;
	t_dlist	*dict_unsorted;

	dl_numbers = p__strarr_to_dlst(numbers);
	dl_sorted_numbers = p__strarr_to_dlst(numbers);
	a__bubblesort(dl_sorted_numbers);
	dict = p__int_to_pair(dl_sorted_numbers);
	dict_unsorted = reorganize_dict(dl_numbers, dict);

	ft_dlstclear(&dict, &free);
	ft_dlstclear(&dl_sorted_numbers, &free);
	ft_dlstclear(&dl_numbers, &free);
	return (dict_unsorted);
}

t_dlist	*reorganize_dict(t_dlist *original, t_dlist *dict)
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
				ft_dlstadd_back(&i_dict_unsorted, ft_dlstnew(new_pair(kv->key, kv->value)));
				break ;
			}
			i_dict = i_dict->next;
		}
		original = original->next;
	}
	return (i_dict_unsorted);
}

/**
 * -- 20 40 70 10 60 30 00
 *
 * -- 00 10 20 30 40 60 70
 *
 *         20 40 70 10 60 30 00
 *
 * value - 00 10 20 30 40 60 70
 * key   - 0  1  2  3  4  5  6
*/

void	handle_stk_fill(t_stack **a, char **stack)
{
	int	length;

	ft_stkinit(a);
	length = ft_mtxlen(stack) - 1;
	while (length >= 0)
	{
		ft_stkpush(*a, new_int(ft_atoi(stack[length])));
		length--;
	}
}

void	free_program(t_push_swap *ps)
{
	ft_stkclear(ps->a, &free);
	ft_stkclear(ps->b, &free);
	free(ps);
}

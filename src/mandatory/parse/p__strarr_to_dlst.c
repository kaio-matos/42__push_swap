/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p__strarr_to_dlst.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 19:19:55 by kmatos-s          #+#    #+#             */
/*   Updated: 2023/02/06 21:39:34 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

t_dlist	*p__strarr_to_dlst(char **numbers)
{
	t_dlist	*list;

	list = NULL;
	while (*numbers)
	{
		ft_dlstadd_back(&list, ft_dlstnew(new_int(ft_atoi(*numbers))));
		numbers++;
	}
	return (list);
}

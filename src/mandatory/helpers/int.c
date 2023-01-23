/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 20:42:53 by kmatos-s          #+#    #+#             */
/*   Updated: 2023/01/23 19:23:12 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	*new_int(int value)
{
	int	*heaped_value;

	heaped_value = ft_salloc(sizeof(int));
	*heaped_value = value;
	return (heaped_value);
}

int	get_int(void *pointer)
{
	return (*(int *)pointer);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   safely_throw_error.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 09:06:07 by kmatos-s          #+#    #+#             */
/*   Updated: 2023/01/28 09:15:57 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	safely_throw_error(t_push_swap *ps, char *message, ...)
{
	va_list	args;

	va_start(args, message);
	ft_vprterr(message, args);
	va_end(args);
	free_program(ps);
	exit(EXIT_FAILURE);
}

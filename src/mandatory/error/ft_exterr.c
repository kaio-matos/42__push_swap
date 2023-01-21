/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exterr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 10:59:22 by kmatos-s          #+#    #+#             */
/*   Updated: 2023/01/21 11:19:48 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	ft_exterr(char *message)
{
	ft_prterr(message);
	exit(EXIT_FAILURE);
}

void	ft_exterra(char *message, char *argument, int errno)
{
	ft_prterra(message, argument);
	exit(errno);
}

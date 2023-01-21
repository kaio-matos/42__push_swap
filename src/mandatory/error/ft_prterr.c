/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prterr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 10:59:22 by kmatos-s          #+#    #+#             */
/*   Updated: 2023/01/21 11:19:10 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	ft_prterr(char *message)
{
	ft_putstr_fd(SHELL_R, STDERR_FILENO);
	ft_fprintf(STDERR_FILENO, ERROR);
	if (VERBOSE)
		ft_fprintf(STDERR_FILENO, message);
	ft_putstr_fd(SHELL_R, STDERR_FILENO);
}

void	ft_prterra(char *message, char *argument)
{
	ft_putstr_fd(SHELL_R, STDERR_FILENO);
	ft_fprintf(STDERR_FILENO, ERROR);
	if (VERBOSE)
		ft_fprintf(STDERR_FILENO, "%s: %s\n", message, argument);
	ft_putstr_fd(SHELL_R, STDERR_FILENO);
}

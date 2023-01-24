/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   v__program.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 20:24:41 by kmatos-s          #+#    #+#             */
/*   Updated: 2023/01/24 20:27:30 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	v__program(int argc, char **argv)
{
	if (argc <= 1)
		ft_exterr("Missing arguments\n");
	while (*(++argv))
		if (!ft_isinteger(*argv))
			ft_exterr("Bad arguments, not an integer\n");
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   v__program.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 20:24:41 by kmatos-s          #+#    #+#             */
/*   Updated: 2023/02/06 21:42:36 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

char	**v__program(int argc, char **argv)
{
	char	**numbers;
	char	**temp;

	if (argc <= 1)
		ft_exterr("Missing arguments\n");
	if (argc >= 3)
		ft_exterr("Too much arguments\n");
	numbers = ft_split(argv[1], ' ');
	temp = numbers;
	while (*(++temp))
		if (!ft_isinteger(*temp))
		{
			ft_free_matrix(numbers);
			ft_exterr("Bad arguments, not an integer\n");
		}
	return (numbers);
}

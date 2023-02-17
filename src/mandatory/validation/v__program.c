/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   v__program.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 20:24:41 by kmatos-s          #+#    #+#             */
/*   Updated: 2023/02/16 21:29:23 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

t_bool	has_repeated_numbers(char **numbers);

char	**v__program(int argc, char **argv)
{
	char	**numbers;
	char	**temp;

	if (argc <= 1)
		exit(0);
	if (argc == 2)
		numbers = ft_split(argv[1], ' ');
	else
		numbers = ft_mtxdup(++argv, argc - 1);
	temp = numbers;
	while (*temp)
	{
		if (!ft_isinteger(*temp))
		{
			ft_free_matrix(numbers);
			ft_exterr("Bad arguments, not an integer\n");
		}
		temp++;
	}
	if (has_repeated_numbers(numbers))
	{
		ft_free_matrix(numbers);
		ft_exterr("Bad arguments, the list cannot have repeated numbers\n");
	}
	return (numbers);
}

t_bool	has_repeated_numbers(char **numbers)
{
	char	**temp;

	while (*numbers)
	{
		temp = numbers;
		while (*(++temp))
			if (ft_atoi(*numbers) == ft_atoi(*temp))
				return (TRUE);
		numbers++;
	}
	return (FALSE);
}

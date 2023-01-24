/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isinteger.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 20:37:51 by kmatos-s          #+#    #+#             */
/*   Updated: 2023/01/23 22:09:08 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_isinteger(char *string)
{
	long long	converted;
	int			sign;
	int			i;

	sign = 0;
	i = 0;
	if (*string == '-')
		sign = -1;
	while (string[i])
	{
		if (!ft_isdigit(string[i]) && string[i] != '-')
			return (0);
		i++;
	}
	if ((ft_strlen(string) + sign) > MAX_INT_LENGTH)
		return (0);
	converted = ft_atol(string);
	if (converted > __INT_MAX__ || converted < -(__INT_MAX__ - 1))
		return (0);
	return (1);
}

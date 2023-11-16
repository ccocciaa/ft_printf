/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoccia <ccoccia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 15:34:39 by ccoccia           #+#    #+#             */
/*   Updated: 2023/11/13 13:31:06 by ccoccia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Include/libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	nbr;
	int	kiwi;

	i = 0;
	nbr = 0;
	kiwi = 1;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i + 1] == '-' || str[i + 1] == '+')
			return (0);
		if (str[i] == '-')
			kiwi = -1 * kiwi;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + (str[i] - '0');
		i++;
	}
	nbr = nbr * kiwi;
	return (nbr);
}

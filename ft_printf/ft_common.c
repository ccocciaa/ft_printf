/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_common.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoccia <ccoccia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:42:13 by ccoccia           #+#    #+#             */
/*   Updated: 2023/11/13 13:48:00 by ccoccia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Include/libft.h"
#include "Include/ft_printf.h"

int	ft_printchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_printstr(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_printper(void)
{
	ft_printchar('%');
	return (1);
}

int	ft_printnbr(int n)
{
	int		l;
	char	*num;

	l = 0;
	num = ft_itoa(n);
	l = ft_printstr(num);
	free(num);
	return (l);
}

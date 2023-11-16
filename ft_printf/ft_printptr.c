/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoccia <ccoccia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:47:09 by ccoccia           #+#    #+#             */
/*   Updated: 2023/11/13 16:25:16 by ccoccia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Include/libft.h"
#include "Include/ft_printf.h"

int	ft_ptrl(unsigned long long ptr)
{
	int	i;

	i = 0;
	while (ptr != 0)
	{
		ptr /= 16;
		i++;
	}
	return (i);
}

void	ft_putptr(unsigned long long ptr)
{
	if (ptr >= 16)
	{
		ft_putptr(ptr / 16);
		ft_putptr(ptr % 16);
	}
	else if (ptr > 9)
	{
		ft_putchar_fd((ptr - 10 + 'a'), 1);
	}
	else
	{
		ft_putchar_fd((ptr + '0' ), 1);
	}
}

int	ft_printptr(unsigned long long ptr)
{
	int	print_l;

	print_l = 0;
	print_l += write(1, "0x", 2);
	if (ptr == 0)
		print_l += write(1, "0", 1);
	else
	{
		ft_putptr(ptr);
		print_l += ft_ptrl(ptr);
	}
	return (print_l);
}

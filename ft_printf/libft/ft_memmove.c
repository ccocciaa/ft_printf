/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoccia <ccoccia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:34:01 by ccoccia           #+#    #+#             */
/*   Updated: 2023/11/13 13:33:48 by ccoccia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Include/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (0);
	if (((char *)dst) > ((char *)src))
	{
		while (n-- > 0)
		{
			((char *)dst)[n] = ((char *)src)[n];
		}
	}
	else
	{
		while (i < n)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dst);
}

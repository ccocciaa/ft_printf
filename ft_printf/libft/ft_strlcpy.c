/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoccia <ccoccia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 15:23:36 by ccoccia           #+#    #+#             */
/*   Updated: 2023/11/13 13:34:24 by ccoccia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Include/libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
	{
		while (src[i])
			i++;
		return (i);
	}
	while (i < size - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if (size > i)
	{
		dst[i] = '\0';
	}
	while (src[i] != '\0')
		i++;
	return (i);
}

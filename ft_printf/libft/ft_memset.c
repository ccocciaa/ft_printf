/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoccia <ccoccia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:07:34 by ccoccia           #+#    #+#             */
/*   Updated: 2023/11/13 13:33:51 by ccoccia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Include/libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = c;
		i++;
	}
	return ((void *)b);
}

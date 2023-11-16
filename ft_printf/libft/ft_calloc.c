/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoccia <ccoccia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 12:48:40 by ccoccia           #+#    #+#             */
/*   Updated: 2023/11/13 13:32:22 by ccoccia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Include/libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	p = (void *)malloc(count * size);
	if (!p || (SIZE_MAX == size && SIZE_MAX == count))
		return (NULL);
	ft_bzero(p, count * size);
	return (p);
}

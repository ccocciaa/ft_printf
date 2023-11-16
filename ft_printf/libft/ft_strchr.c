/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoccia <ccoccia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:57:01 by ccoccia           #+#    #+#             */
/*   Updated: 2023/11/13 13:34:11 by ccoccia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Include/libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	size_t	l;

	i = 0;
	l = ft_strlen(s);
	while (i <= l)
	{
		if (s[i] == (char)c)
			return ((char *) &s[i]);
		i++;
	}
	return (NULL);
}

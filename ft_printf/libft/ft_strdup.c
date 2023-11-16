/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoccia <ccoccia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 12:41:14 by ccoccia           #+#    #+#             */
/*   Updated: 2023/11/13 13:34:14 by ccoccia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Include/libft.h"

char	*ft_strdup(const char *s)
{
	char	*c;

	c = malloc ((ft_strlen(s)) + 1);
	if (c == NULL)
		return (0);
	ft_strlcpy (c, s, (ft_strlen(s) + 1));
	return (c);
}

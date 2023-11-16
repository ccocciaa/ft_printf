/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoccia <ccoccia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 17:46:59 by ccoccia           #+#    #+#             */
/*   Updated: 2023/11/13 13:34:19 by ccoccia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Include/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	size_t	l;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	l = ft_strlen(s1);
	s = malloc(l + ft_strlen(s2) + 1);
	if (!s)
		return (NULL);
	i = 0;
	while (i < l)
	{
		s[i] = s1[i];
		i++;
	}
	l = 0;
	while (l < ft_strlen(s2))
	{
		s[i] = s2[l];
		i++;
		l++;
	}
	s[i] = '\0';
	return (s);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoccia <ccoccia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 12:32:48 by ccoccia           #+#    #+#             */
/*   Updated: 2023/11/13 13:45:02 by ccoccia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Include/libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (s2[0] == '\0')
		return ((char *)s1);
	if (len == 0)
		return (NULL);
	while (s1[i] != '\0' && i < len)
	{
		j = 0;
		while (s2[j] != '\0')
		{
			if (s1[i + j] == s2[j] && (i + j) < len)
			{
				if (s2[j + 1] == '\0')
					return ((char *)&s1[i]);
				j++;
			}
			else
				break ;
		}
		i++;
	}
	return (0);
}

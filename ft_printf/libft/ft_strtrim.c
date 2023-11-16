/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoccia <ccoccia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 17:49:49 by ccoccia           #+#    #+#             */
/*   Updated: 2023/11/13 13:34:45 by ccoccia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Include/libft.h"

int	is_in_string(char c, char const *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*strcast;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && is_in_string(s1[i], set))
		i++;
	j = ft_strlen(s1) - 1;
	while (j > i && is_in_string(s1[j], set))
		j--;
	strcast = (char *)malloc((j - i + 2) * sizeof(char));
	if (!strcast)
		return (NULL);
	k = 0;
	while (i <= j)
	{
		strcast[k++] = s1[i];
		i++;
	}
	strcast[k] = '\0';
	return (strcast);
}

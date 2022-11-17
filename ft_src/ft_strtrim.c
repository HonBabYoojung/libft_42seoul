/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungohki <sungohki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 12:54:53 by sungohki          #+#    #+#             */
/*   Updated: 2022/11/17 14:25:15 by sungohki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_set(char const s1, char const *set)
{
	int		index;

	index = -1;
	while (set[++index])
		if (s1 == set[index])
			return (0);
	return (1);
}

char	*ft_trim(char const *s1, char const *set)
{
	char	*result;
	int		len;
	int		index;

	len = 0;
	index = -1;
	while (s1[++index])
		if (is_set(s1[index], set) == 1)
			len++;
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == 0)
		return (0);
	result[len] = 0;
	while (--index >= 0)
		if (is_set(s1[index], set) == 1)
			result[(len--) - 1] = s1[index];
	return (result);
}

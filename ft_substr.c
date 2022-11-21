/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungohki <sungohki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:15:32 by sungohki          #+#    #+#             */
/*   Updated: 2022/11/16 17:44:45 by sungohki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*result;
	size_t		s_len;
	size_t		index;

	s_len = 0;
	while (s[s_len])
		s_len++;
	if (start > s_len + 1)
		return (0);
	if (start + len > s_len + 1)
		len = s_len + 1 - start;
	result = (char *)malloc(sizeof(char) * (len));
	if (result == 0)
		return (0);
	index = 0;
	while (index + 1 < len)
	{
		result[index] = s[index + start];
		index++;
	}
	result[index] = 0;
	return (result);
}

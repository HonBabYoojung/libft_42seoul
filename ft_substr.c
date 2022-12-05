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

	if (start >= ft_strlen(s) || s == 0)
		return (0);
	if (start + len > ft_strlen(s) + 1)
		len = ft_strlen(s) + 1 - start;
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == 0)
		return (0);
	result[len] = 0;
	while (len--)
		result[len] = s[len + start];
	return (result);
}

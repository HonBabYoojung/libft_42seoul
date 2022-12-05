/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungohki <sungohki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 09:14:59 by sungohki          #+#    #+#             */
/*   Updated: 2022/12/05 19:28:01 by sungohki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*result;

	result = (char *)s;
	while (*result)
		result++;
	if (c == 0)
		return (result);
	while (*s != *result && s != 0)
	{
		if (*result == (unsigned char)c)
			return (result);
		result--;
	}
	if (*result == (unsigned char)c)
		return (result);
	return (0);
}

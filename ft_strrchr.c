/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungohki <sungohki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 09:14:59 by sungohki          #+#    #+#             */
/*   Updated: 2022/11/30 19:08:54 by sungohki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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

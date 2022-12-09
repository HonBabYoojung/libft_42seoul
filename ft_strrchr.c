/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungohki <sungohki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 09:14:59 by sungohki          #+#    #+#             */
/*   Updated: 2022/12/09 22:19:34 by sungohki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*result;

	if (s == 0)
		return (0);
	result = (char *)s;
	while (*result)
		result++;
	if ((unsigned char)c == 0)
		return (result);
	while (*s != *result)
	{
		if ((unsigned char)*result == (unsigned char)c)
			return (result);
		result--;
	}
	if ((unsigned char)*result == (unsigned char)c)
		return (result);
	else
		return (0);
}

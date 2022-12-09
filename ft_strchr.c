/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungohki <sungohki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:48:47 by sungohki          #+#    #+#             */
/*   Updated: 2022/12/09 22:03:35 by sungohki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*result;

	if (s == 0)
		return (0);
	result = (char *)s;
	while (*result)
	{
		if ((unsigned char)*result == (unsigned char)c)
			return (result);
		result++;
	}
	if ((unsigned char)c == 0)
		return (result);
	else
		return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungohki <sungohki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 09:46:02 by sungohki          #+#    #+#             */
/*   Updated: 2022/11/23 16:07:12 by sungohki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			index;
	int				result;

	index = 0;
	result = 0;
	while (s1[index] && s2[index] && index < n)
	{
		result = (unsigned char)s1[index] - (unsigned char)s2[index];
		if (result != 0)
			return (result);
		index++;
	}
	return (result);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungohki <sungohki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:54:08 by sungohki          #+#    #+#             */
/*   Updated: 2022/11/11 16:54:46 by sungohki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			index;
	unsigned char	*result;

	index = 0;
	result = b;
	while (result[index] != 0)
		index++;
	if (index + 1 < len)
		return (b);
	else
		index = 0;
	while (index < len)
	{
		result[index] = (unsigned char)c;
		index++;
	}
	return (b);
}

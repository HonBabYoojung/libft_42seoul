/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungohki <sungohki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 19:24:35 by sungohki          #+#    #+#             */
/*   Updated: 2022/11/28 12:08:52 by sungohki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dst, const void *src, size_t n)
{
	unsigned char			*dest;
	unsigned const char		*source;

	dest = (unsigned char *)dst;
	source = (unsigned const char *)src;
	if (dst == src)
		return (dst);
	while (n--)
		dest[n] = source[n];
	return (dst);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungohki <sungohki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:10:50 by sungohki          #+#    #+#             */
/*   Updated: 2022/11/16 16:54:45 by sungohki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t		index;
	size_t		dst_len;
	size_t		src_len;

	dst_len = 0;
	src_len = 0;
	while (src[src_len] != 0)
		src_len++;
	while (dst[dst_len] != 0)
		dst_len++;
	if (dst == src || dstsize > dst_len + 1)
		return (src_len);
	index = 0;
	while (index + 1 < dstsize && index < src_len)
	{
		dst[index] = src[index];
		index++;
	}
	dst[index] = 0;
	return (src_len);
}

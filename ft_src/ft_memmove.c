/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungohki <sungohki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 20:39:09 by sungohki          #+#    #+#             */
/*   Updated: 2022/11/11 16:54:25 by sungohki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dst_str;
	unsigned const char	*src_str;
	size_t				index;
	size_t				dst_len;

	dst_len = 0;
	dst_str = dst;
	src_str = src;
	if (dst == src)
		return (dst);
	while (dst_str[dst_len] != 0)
		dst_len++;
	if (dst_len == 0 || dst_len + 1 < len)
		return (dst);
	else
		index = 0;
	while (index < len)
	{
		if (dst < src)
			dst_str[index] = src_str[index];
		else
			dst_str[len - index - 1] = src_str[len - index - 1];
		index++;
	}
	return (dst);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungohki <sungohki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:10:50 by sungohki          #+#    #+#             */
/*   Updated: 2022/11/28 12:49:55 by sungohki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	if (ft_strlen(src) + 1 < dstsize)
		dstsize = ft_strlen(src) + 1;
	if (dst == src || dstsize == 0)
		return (ft_strlen(src));
	dst[--dstsize] = 0;
	while (dstsize--)
		dst[dstsize] = src[dstsize];
	return (ft_strlen(src));
}

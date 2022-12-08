/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungohki <sungohki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:31:52 by sungohki          #+#    #+#             */
/*   Updated: 2022/12/08 18:54:48 by sungohki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*temp;
	size_t	index;

	index = 0;
	temp = malloc(size * count);
	if (temp == 0 || size >= (SIZE_MAX / count))
		return (0);
	ft_bzero(temp, count * size);
	return (temp);
}

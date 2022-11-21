/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungohki <sungohki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 19:07:04 by sungohki          #+#    #+#             */
/*   Updated: 2022/11/11 16:56:09 by sungohki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*temp;
	size_t			index;

	index = 0;
	temp = s;
	while (temp[index] != 0)
		index++;
	if (n == 0 || index + 1 < n)
		return ;
	else
		index = 0;
	while (index < n)
	{
		temp[index] = 0;
		index++;
	}
}

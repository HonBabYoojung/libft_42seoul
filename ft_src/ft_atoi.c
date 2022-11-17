/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungohki <sungohki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:24:54 by sungohki          #+#    #+#             */
/*   Updated: 2022/11/14 16:57:05 by sungohki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		index;
	int		minus;
	int		result;

	result = 0;
	index = 0;
	minus = 1;
	while ((9 <= str[index] && str[index] <= 13) || str[index] == 32)
		index++;
	if (str[index] == '+' || str[index] == '-')
		minus = 44 - str[index++];
	while ('0' <= str[index] && str[index] <= '9')
		result = result * 10 + (int)(str[index++] - '0');
	return (minus * result);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungohki <sungohki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 17:44:30 by sungohki          #+#    #+#             */
/*   Updated: 2022/11/16 18:01:34 by sungohki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		s1_len;
	int		s2_len;

	s1_len = 0;
	s2_len = 0;
	while (s1[s1_len])
		s1_len++;
	while (s2[s2_len])
		s2_len++;
	result = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (result == 0)
		return (0);
	result[s1_len + s2_len] = 0;
	while (s2_len > 0)
	{
		result[s1_len + s2_len - 1] = s2[s2_len - 1];
		s2_len--;
	}
	while (s1_len > 0)
	{
		result[s1_len - 1] = s1[s1_len - 1];
		s1_len--;
	}
	return (result);
}

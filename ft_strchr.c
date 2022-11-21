/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungohki <sungohki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:48:47 by sungohki          #+#    #+#             */
/*   Updated: 2022/11/11 17:19:37 by sungohki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int		index;

	index = -1;
	while (s[++index])
	{
		if (s[index] == c)
			return (&((char *)s)[index]);
	}
	if (c == 0)
		return (&((char *)s)[index]);
	else
		return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungohki <sungohki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 09:14:59 by sungohki          #+#    #+#             */
/*   Updated: 2022/11/14 14:23:57 by sungohki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int		index;
	char	*temp;

	index = -1;
	temp = 0;
	while (s[++index] != 0)
	{
		if (s[index] == c)
			temp = &((char *)s)[index];
	}
	if (c == 0)
		return (&((char *)s)[index]);
	else
		return (temp);
}

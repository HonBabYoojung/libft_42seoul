/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungohki <sungohki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 10:53:55 by sungohki          #+#    #+#             */
/*   Updated: 2022/11/21 11:08:47 by sungohki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int		len;
	unsigned int		index;

	len = 0;
	while (s[len])
		len++;
	index = 0;
	while (s[index])
	{
		(*f)(index, s);
		index++;
	}
}

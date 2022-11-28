/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungohki <sungohki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 12:13:40 by sungohki          #+#    #+#             */
/*   Updated: 2022/11/23 16:07:22 by sungohki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	unsigned int	len;

	len = 0;
	if (fd >= 0 && fd <= 2)
	{
		while (s[len])
			len++;
		write(fd, s, (len + 1));
		write(fd, "\n", 1);
	}
}

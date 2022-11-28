/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungohki <sungohki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 12:13:40 by sungohki          #+#    #+#             */
/*   Updated: 2022/11/28 18:17:37 by sungohki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	unsigned int	len;

	len = ft_strlen(s);
	if (fd >= 0)
	{
		write(fd, s, (len + 1));
		write(fd, "\n", 1);
	}
}

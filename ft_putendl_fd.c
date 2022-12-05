/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungohki <sungohki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 12:13:40 by sungohki          #+#    #+#             */
/*   Updated: 2022/12/05 20:39:28 by sungohki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	unsigned int	len;

	if (s == 0)
		return ;
	len = ft_strlen(s);
	s[len] = '\n';
	if (fd >= 0)
		write(fd, s, (len + 1));
}

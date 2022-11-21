/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungohki <sungohki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 12:16:30 by sungohki          #+#    #+#             */
/*   Updated: 2022/11/21 13:23:05 by sungohki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(long n, int fd)
{
	char	temp;

	temp = n % 10 + '0';
	if (n / 10 > 0)
		ft_putnbr(n / 10, fd);
	write(fd, &temp, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n > 0)
		ft_putnbr((long)n, fd);
	else
	{
		write(fd, "-", 1);
		ft_putnbr(-(long)n, fd);
	}
}

// int	main(void)
// {
// 	int	test10 = -2147483648;
// 	ft_putnbr_fd(test10, 1);
// 	return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testcase.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungohki <sungohki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 09:47:49 by sungohki          #+#    #+#             */
/*   Updated: 2022/11/30 17:35:17 by sungohki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTCASE_H
# define TESTCASE_H
# include<stdio.h>
# include <ctype.h>
# include <string.h>
# include <limits.h>
# include "testcase.h"
# include "../ft_isalpha.c"
# include "../ft_isdigit.c"
# include "../ft_isalnum.c"
# include "../ft_isascii.c"
# include "../ft_isprint.c"
# include "../ft_strlen.c"
# include "../ft_memset.c"
# include "../ft_bzero.c"
# include "../ft_memcpy.c"
# include "../ft_memmove.c"
# include "../ft_strlcpy.c"
# include "../ft_strlcat.c"
# include "../ft_toupper.c"
# include "../ft_tolower.c"
# include "../ft_strchr.c"
# include "../ft_strrchr.c"
# include "../ft_strncmp.c"
# include "../ft_memchr.c"
# include "../ft_memcmp.c"
# include "../ft_strnstr.c"
# include "../ft_atoi.c"
# include "../ft_calloc.c"
# include "../ft_strdup.c"
# include "../ft_substr.c"
# include "../ft_strjoin.c"
# include "../ft_strtrim.c"
# include "../ft_split.c"
# include "../ft_itoa.c"
# include "../ft_strmapi.c"
# include "../ft_striteri.c"
# include "../ft_putchar_fd.c"
# include "../ft_putstr_fd.c"
# include "../ft_putendl_fd.c"
# include "../ft_putnbr_fd.c"

void	print_all(char *str, size_t size)
{
	for (size_t index = 0; index < size; index++){
		if (str[index] == 0)
			printf("\\0");
		else
			printf("%c", str[index]);
	}
	printf("\n");
}

char	test_strmapi(unsigned int num, char ch)
{
	return (num % 2 + 1 + ch);
}

void	test_striteri(unsigned int num, char *str)
{
	if (str[num] > 'a' && str[num] < 'z')
		str[num] = str[num] + 'A' - 'a';
	else if (str[num] > 'A' && str[num] < 'Z')
		str[num] = str[num] + 'a' - 'A';
}
#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungohki <sungohki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 19:18:40 by sungohki          #+#    #+#             */
/*   Updated: 2022/11/28 20:34:17 by sungohki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "testcase.h"

static int	count_words(char const *s, char c)
{
	size_t	count;

	count = 0;
	if (*s != c)
		count++;
	while (*(++s))
		if (*s != c && *(s - 1) == c)
			count++;
	return (count);
}

static char	*seperate_word(char const *s, char c)
{
	char		*result;
	size_t		len;

	len = 0;
	while (s[len] != c)
		len++;
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == 0)
		return (0);
	result[len] = 0;
	while (len--)
		result[len] = s[len];
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		count;
	int		index;

	index = 0;
	count = count_words(s, c);
	result = (char **)malloc(sizeof(char *) * (count + 1));
	if (result == 0)
		return (0);
	result[count] = 0;
	while (count-- && *s)
	{
		while (*s == c && *s)
			s++;
		result[index++] = seperate_word(s, c);
		while (*s != c && *s)
			s++;
	}
	return (result);
}

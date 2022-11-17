/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungohki <sungohki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:00:01 by sungohki          #+#    #+#             */
/*   Updated: 2022/11/17 17:26:19 by sungohki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "testcase.h"

int	count_words(char const *s, char c)
{
	int		index;
	int		count;

	count = 0;
	index = 0;
	while (s[index])
	{
		while (s[index] == c && s[index])
			index++;
		if (s[index] != c && s[index])
		{
			count++;
			while (s[index] != c && s[index])
				index++;
		}
	}
	return (count);
}

char	*seperate_word(char const *s, char c)
{
	char	*result;
	int		start;
	int		len;

	start = 0;
	len = 0;
	while (s[start] == c && s[start])
		start++;
	while (s[start + len] != c && s[start + len])
		len++;
	printf("len : %d + 1\n", len);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == 0)
		return (0);
	result[len] = 000000000;
	while (--len >= 0)
		result[len] = s[start + len];
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		index;
	int		sub;
	int		len;

	len = count_words(s, c);
	index = -1;
	sub = 0;
	result = (char **)malloc(sizeof(char *) * (len + 1));
	if (result == 0)
		return (0);
	while (s[++index] && sub < len)
	{
		if (s[index] != c && s[index])
		{
			result[sub++] = seperate_word(&s[index], c);
			while (s[index] != c && s[index])
				index++;
		}
	}
	result[sub] = 0;
	return (result);
}

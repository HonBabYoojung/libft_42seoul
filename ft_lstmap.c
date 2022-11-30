/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungohki <sungohki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 17:30:43 by sungohki          #+#    #+#             */
/*   Updated: 2022/11/30 17:19:52 by sungohki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*cur;
	t_list	*temp;

	if (lst == 0 || f == 0 || del == 0)
		return (0);
	temp = 0;
	while (lst != 0)
	{
		cur = (t_list *)malloc(sizeof(t_list));
		cur->content = (*f)(lst->content);
		ft_lstadd_back(&temp, cur);
	}
	return (temp);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungohki <sungohki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 17:30:43 by sungohki          #+#    #+#             */
/*   Updated: 2022/12/06 00:02:24 by sungohki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*result;

	if (lst == 0 || f == 0 || del == 0)
		return (0);
	result = 0;
	while (lst != 0)
	{
		new = ft_lstnew(f(lst->content));
		if (new == 0)
		{
			ft_lstdelone(result, del);
			return (0);
		}
		ft_lstadd_back(&result, new);
		lst = lst->next;
	}
	return (result);
}

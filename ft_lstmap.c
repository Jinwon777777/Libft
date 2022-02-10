/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiha <jiha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 20:17:01 by jiha              #+#    #+#             */
/*   Updated: 2022/02/10 17:40:22 by jiha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*ans;
	t_list	*now;

	if (!(lst) || !(f) || !(del))
		return (NULL);
	ans = ft_lstnew(f(lst->content));
	if (!ans)
		return (NULL);
	now = ans;
	lst = lst->next;
	while (lst)
	{
		tmp = ft_lstnew(f(lst->content));
		if (!(tmp))
		{
			ft_lstclear(&ans, del);
			return (NULL);
		}
		now->next = tmp;
		now = tmp;
		lst = lst->next;
	}
	return (ans);
}

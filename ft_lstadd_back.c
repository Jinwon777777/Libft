/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiha <jiha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 19:35:54 by jiha              #+#    #+#             */
/*   Updated: 2022/02/08 20:46:04 by jiha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*back;

	if (new)
	{
		if (!(*lst))
			*lst = new;
		else
		{
			back = ft_lstlast(*lst);
			back->next = new;
			new->next = (NULL);
		}
	}
}

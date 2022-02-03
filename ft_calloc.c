/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiha <jiha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 16:14:23 by jiha              #+#    #+#             */
/*   Updated: 2022/01/12 16:49:20 by jiha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*calloc(size_t count, size_t size)
{
	void	*tmp;

	tmp = malloc(size);
	ft_bzero(tmp, size);
	return (tmp);
}

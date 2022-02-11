/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiha <jiha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 10:40:43 by jiha              #+#    #+#             */
/*   Updated: 2022/02/11 00:08:26 by jiha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t num)
{
	size_t		i;
	char		*tmp1;
	const char	*tmp2;

	if (!(dst) && !(src))
		return (NULL);
	tmp1 = dst;
	tmp2 = src;
	i = 0;
	while (i < num)
	{
		tmp1[i] = tmp2[i];
		i++;
	}
	return (dst);
}

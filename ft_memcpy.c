/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiha <jiha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 10:40:43 by jiha              #+#    #+#             */
/*   Updated: 2022/01/12 11:14:24 by jiha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t num)
{
	size_t		i;
	char		*tmp1;
	const char	*tmp2;

	tmp1 = (char *)dst;
	tmp2 = (const char *)src;
	i = 0;
	while (i < num)
	{
		tmp1[i] = tmp2[i];
		i++;
	}
	return (dst);
}

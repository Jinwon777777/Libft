/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiha <jiha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 11:11:59 by jiha              #+#    #+#             */
/*   Updated: 2022/02/10 19:42:10 by jiha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*tmp_dst;
	const char	*tmp_src;
	size_t		i;

	if (!(dst) && !(src))
		return (NULL);
	if (dst == src || len == 0)
		return (dst);
	i = 0;
	tmp_dst = (char *) dst;
	tmp_src = (const char *) src;
	if (dst < src)
	{
		while (len-- > 0)
			*tmp_dst++ = *tmp_src++;
	}
	else
	{
		while (len-- > 0)
			tmp_dst[len] = tmp_src[len];
	}
	return (dst);
}

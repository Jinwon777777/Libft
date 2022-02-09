/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiha <jiha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 11:11:59 by jiha              #+#    #+#             */
/*   Updated: 2022/02/10 08:40:25 by jiha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memmove(void *dst, const void *src, size_t num)
{
	char		*tmp_dst;
	const char	*tmp_src;
	size_t		i;

	if (!(dst) && !(src))
		return (NULL);
	i = 0;
	tmp_dst = (char *) dst;
	tmp_src = (const char *) src;
	if (dst < src)
	{
		while (i < num)
		{
			tmp_dst[i] = tmp_src[i];
			i++;
		}
	}
	else
	{
		while (num-- > 0)
			tmp_dst[num - 1] = tmp_src[num - 1];
	}
	return (dst);
}

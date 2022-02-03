/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiha <jiha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 11:11:59 by jiha              #+#    #+#             */
/*   Updated: 2022/01/12 11:39:05 by jiha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memmove(void *dest, const void *src, size_t num)
{
	char		*dst;
	const char	*src;
	size_t		i;

	i = 0;
	dst = (char *) dest;
	src = (const char *) src;
	if (dst < src)
	{
		while (i < num)
		{
			dst[i] = src[i];
			i++;
		}
	}
	else
	{
		while (num > 0)
		{
			dst[num - 1] = src[num - 1];
			num--;
		}
	}
	return (dest);
}

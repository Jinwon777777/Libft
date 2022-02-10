/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiha <jiha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 13:23:12 by jiha              #+#    #+#             */
/*   Updated: 2022/02/10 10:23:56 by jiha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char	*dst, const char *src, size_t dstsize)
{
	size_t	dl;
	size_t	sl;
	size_t	i;

	i = 0;
	dl = ft_strlen(dst);
	sl = ft_strlen(src);
	if (dstsize - 1 < dl)
		return (sl + dstsize);
	if (dstsize - 1 > dl)
	{
		while ((dl + i < dstsize - 1) && (i < sl))
		{
			dst[dl + i] = src[i];
			i++;
		}
	}
	dst[dl + i] = '\0';
	return (dl + sl);
}

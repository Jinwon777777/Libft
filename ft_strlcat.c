/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiha <jiha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 13:23:12 by jiha              #+#    #+#             */
/*   Updated: 2022/02/09 20:16:08 by jiha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char	*dst, const char *src, size_t dstsize)
{
	size_t	dl;
	size_t	sl;
	size_t	i;

	i = 0;
	dl = 0;
	sl = 0;
	while (dst[dl] != '\0')
		dl++;
	while (src[sl] != '\0')
		sl++;
	if (dstsize < ft_strlen(dst))
	{
		while (dl + i < dstsize - 1 && i < sl)
		{
			dst[dl + i] = src[i];
			i++;
		}
		dst[dl + i] = '\0';
	}
	return (dl + sl);
}

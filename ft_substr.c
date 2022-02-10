/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiha <jiha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 18:26:38 by jiha              #+#    #+#             */
/*   Updated: 2022/02/10 10:46:15 by jiha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*arr;
	size_t	chk;

	if (s == NULL)
		return (NULL);
	if ((unsigned int)ft_strlen(s) <= start)
		return (ft_strdup(""));
	chk = ft_strlen(s + start);
	if (len > chk)
		len = chk;
	arr = (char *)malloc(sizeof(char) * (len + 1));
	if (!(arr))
		return (NULL);
	ft_strlcpy(arr, s + start, len + 1);
	return (arr);
}

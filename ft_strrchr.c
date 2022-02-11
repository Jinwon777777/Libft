/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiha <jiha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 14:16:50 by jiha              #+#    #+#             */
/*   Updated: 2022/02/11 11:05:18 by jiha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*s1;
	int		i;

	s1 = (char *)s;
	i = ft_strlen(s);
	while (i > 0)
	{
		if (s1[i] == (char)c)
			return (s1 + i);
		i--;
	}
	if (s1[i] == (char)c)
		return (s1);
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiha <jiha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 16:49:47 by jiha              #+#    #+#             */
/*   Updated: 2022/02/10 10:52:58 by jiha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*tmp;

	i = ft_strlen(s1);
	tmp = (char *)malloc(sizeof(char) * (i + 1));
	if (!(tmp))
		return (NULL);
	ft_strlcpy(tmp, s1, i + 1);
	return (tmp);
}

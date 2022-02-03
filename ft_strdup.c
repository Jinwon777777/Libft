/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiha <jiha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 16:49:47 by jiha              #+#    #+#             */
/*   Updated: 2022/01/12 17:11:59 by jiha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*tmp;

	i = ft_strlen(s1);
	tmp = (char *)malloc(sizeof(char));
	ft_strlcpy(tmp, s1, i + 1);
	return (tmp);
}

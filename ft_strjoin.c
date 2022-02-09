/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiha <jiha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:17:56 by jiha              #+#    #+#             */
/*   Updated: 2022/02/08 20:45:38 by jiha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		l1;
	int		l2;
	char	*arr;

	if (!(s1) || !(s2))
		return (NULL);
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	arr = (char *)malloc(sizeof(char) * (l1 + l2 + 1));
	if (!(arr))
		return (NULL);
	ft_strlcpy(arr, s1, l1 + 1);
	ft_strlcat(arr + l1, s2, l2 + 1);
	return (arr);
}

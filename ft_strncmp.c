/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiha <jiha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 20:17:07 by jiha              #+#    #+#             */
/*   Updated: 2022/02/10 09:19:55 by jiha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*tmp1;
	unsigned char	*tmp2;

	i = 0;
	tmp1 = (unsigned char)*s1;
	tmp2 = (unsigned char)*s2;
	while (i < n)
	{
		if (tmp1[i] != tmp2[i] || tmp1[i] == '\0' || tmp2[i] == '\0')
			break ;
		i++;
	}
	return (tmp1[i] - tmp2[i]);
}

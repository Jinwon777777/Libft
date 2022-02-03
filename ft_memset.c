/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiha <jiha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 09:28:21 by jiha              #+#    #+#             */
/*   Updated: 2022/01/12 11:04:37 by jiha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memset(void *ptr, int value, size_t num)
{
	size_t	j;
	char	*tmp;

	j = 0;
	tmp = (char *) ptr;
	while (j < num)
	{
		tmp[j] = (unsigned char)value;
		j++;
	}
	return (ptr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiha <jiha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 13:16:27 by jiha              #+#    #+#             */
/*   Updated: 2022/02/10 16:50:36 by jiha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int n)
{
	int	i;

	i = 0;
	if (n < 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int			len;
	char		*arr;
	long long	tmp;

	len = ft_len(n);
	tmp = n;
	arr = (char *)malloc(sizeof(char) * (len + 1));
	if (!(arr))
		return (NULL);
	if (tmp < 0)
	{
		arr[0] = '-';
		tmp = (-1 * tmp);
	}
	arr[len--] = '\0';
	while (len != 0)
	{
		arr[len] = (tmp % 10) + '0';
		tmp = (tmp / 10);
		len--;
	}
	return (arr);
}

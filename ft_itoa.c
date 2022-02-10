/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiha <jiha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 13:16:27 by jiha              #+#    #+#             */
/*   Updated: 2022/02/10 17:06:13 by jiha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(long long n)
{
	int	i;

	i = 0;
	if (n <= 0)
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
	int		len;
	char	*arr;
	int		s;	

	if (n == -2147483648)
	{
		arr = ft_strdup("-2147483648");
		return (arr);
	}
	s = 1;
	if (n < 0)
		s = -1;
	len = ft_len(n);
	arr = (char *)malloc(sizeof(char) * (len + 1));
	if (!(arr))
		return (NULL);
	arr[len--] = '\0';
	while (len >= 0)
	{
		arr[len--] = (n % 10) + '0';
		n = (n / 10);
	}
	if (s == -1)
		arr[0] = '-';
	return (arr);
}

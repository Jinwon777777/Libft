/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiha <jiha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 13:54:34 by jiha              #+#    #+#             */
/*   Updated: 2022/02/10 20:26:12 by jiha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\r')
		return (1);
	if (c == '\n' || c == '\v' || c == '\f')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int			i;
	int			pos_neg;
	long long	val;

	i = 0;
	pos_neg = 1;
	val = 0;
	while (ft_is_space(str[i]) && str[i])
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			pos_neg *= (-1);
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		val = (10 * val) + (str[i] - '0');
		i++;
	}
	if ((val > 2147483648) && (pos_neg == -1))
		return (0);
	if ((val > 2147483647) && (pos_neg == 1))
		return (-1);
	return ((int)val * pos_neg);
}

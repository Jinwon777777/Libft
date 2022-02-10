/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiha <jiha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 13:54:34 by jiha              #+#    #+#             */
/*   Updated: 2022/02/10 09:10:12 by jiha             ###   ########.fr       */
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

int	ft_atoi(char *str)
{
	int	i;
	int	pos_neg;
	int	val;

	i = 0;
	pos_neg = 1;
	val = 0;
	while (ft_is_space(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			pos_neg *= (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (pos_neg == (-1))
			val = 10 * val - (str[i] - 48);
		else
			val = 10 * val + (str[i] - 48);
		i++;
	}
	return (val);
}

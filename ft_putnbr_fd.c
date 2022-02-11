/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiha <jiha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 16:18:16 by jiha              #+#    #+#             */
/*   Updated: 2022/02/11 10:53:23 by jiha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	val;
	char	c;

	if (fd < 0)
		return ;
	val = n;
	if (val < 0)
	{
		write(fd, "-", 1);
		val *= -1;
	}
	if (val >= 10)
		ft_putnbr_fd(val / 10, fd);
	c = '0' + (val % 10);
	write(fd, &c, 1);
}

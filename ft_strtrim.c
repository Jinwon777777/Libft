/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiha <jiha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:59:58 by jiha              #+#    #+#             */
/*   Updated: 2022/02/10 22:12:06 by jiha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*ans;

	if (!(s1))
		return (ft_strdup(""));
	if (!(set))
		return (ft_strdup(s1));
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1) - 1;
	while (s1[end] && end >= start && ft_strchr(set, s1[end]))
		end--;
	ans = (char *)malloc(sizeof(char) * (end - start + 2));
	if (!(ans))
		return (NULL);
	i = 0;
	while (start <= end)
		ans[i++] = s1[start++];
	ans[i] = '\0';
	return (ans);
}

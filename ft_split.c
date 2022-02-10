/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiha <jiha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 14:37:21 by jiha              #+#    #+#             */
/*   Updated: 2022/02/10 16:31:04 by jiha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_free_error(char **arr)
{
	int	i;

	i = 0;
	while (arr[i] != NULL)
		free(arr[i++]);
	free(arr);
	return (NULL);
}

static int	ft_get_cnt(char const *s, char c)
{
	size_t	i;
	size_t	cnt;

	i = 0;
	cnt = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			cnt++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (cnt);
}

static char	*ft_word_cpy(char const *s, int wordl)
{
	char	*w;
	char	*tmp;

	w = (char *)malloc(sizeof(char) * (wordl + 1));
	if (!(w))
		return (NULL);
	tmp = w;
	while (wordl-- > 0)
		*tmp++ = *s++;
	*tmp = '\0';
	return (w);
}

static void	ft_word_split(char **arr, char const *s, char c, int cnt)
{
	int	i;
	int	l;

	i = 0;
	while (*s && i < cnt)
	{
		while (*s && *s == c)
			s++;
		l = 0;
		while (*s != c && *s != '\0')
		{
			l++;
			s++;
		}
		arr[i] = ft_word_cpy(s - l, l);
		if (!arr[i])
		{
			ft_free_error(arr);
			return ;
		}
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		cnt;

	if (!(s))
		return (NULL);
	cnt = ft_get_cnt(s, c);
	arr = (char **)malloc(sizeof(char *) * (cnt + 1));
	if (!(arr))
		return (NULL);
	arr[cnt] = NULL;
	ft_word_split(arr, s, c, cnt);
	return (arr);
}

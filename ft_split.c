/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiha <jiha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 14:37:21 by jiha              #+#    #+#             */
/*   Updated: 2022/02/10 15:35:51 by jiha             ###   ########.fr       */
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
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c)
		{
			cnt++;
			while (s[i] && s[i] == c)
				i++;
		}
		else
			i++;
	}
	if (s[i - 1] != c)
		cnt++;
	return (cnt);
}

static int	ft_wordlength(char const *s, char c)
{
	int	l;

	l = 0;
	while (*s != '\0' && *s != c)
	{
		s++;
		l++;
	}
	return (l);
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

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		cnt;
	int		wordn;
	int		wordl;

	if (!(s))
		return (NULL);
	cnt = ft_get_cnt(s, c);
	arr = (char **)malloc(sizeof(char *) * (cnt + 1));
	if (!(arr))
		return (NULL);
	wordn = -1;
	while (++wordn < cnt)
	{
		while (*s == c && *s != '\0')
			s++;
		wordl = ft_wordlength(s, c);
		arr[wordn] = ft_word_cpy(s, wordl);
		if (!(arr[wordn]))
		{
			ft_free_error(arr);
			return (NULL);
		}
		s += wordl;
	}
	arr[cnt] = NULL;
	return (arr);
}

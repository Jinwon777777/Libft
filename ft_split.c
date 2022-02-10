/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiha <jiha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 14:37:21 by jiha              #+#    #+#             */
/*   Updated: 2022/02/10 14:50:06 by jiha             ###   ########.fr       */
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
			i = ft_pass(s, i, c);
		}
		else
			i++;
	}
	if (s[i - 1] != c)
		cnt++;
	return (cnt);
}

static char	*ft_word_print(char *word, char const *s, int l, int w_len)
{
	int	i;

	i = 0;
	while (i < w_len)
	{
		word[i] = s[l - w_len + i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static char	*ft_word_cpy(char **arr, char const *s, char c, int cnt)
{
	size_t	l;
	size_t	i;
	size_t	w_len;

	l = 0;
	i = -1;
	while (s[l] && ++i < cnt)
	{
		w_len = 0;
		while (s[l] && s[l] == c)
			l++;
		while (s[l + w_len] && s[l + w_len] != c)
			w_len++;
		l += w_len;
		arr[i] = (char *)malloc(sizeof(char) * (w_len + 1));
		if (!arr[i])
		{
			ft_free_error(arr);
			return (NULL);
		}
		ft_word_print(arr[i], s, l, w_len);
	}
	arr[i] = '\0';
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		cnt;
	int		a;
	int		x;

	if (!(s))
		return (NULL);
	cnt = ft_get_cnt(s, c);
	arr = (char **)malloc(sizeof(char *) * (cnt + 1));
	if (!(arr))
		return (NULL);
	ft_word_cpy(arr, s, c, cnt);
	return (arr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiha <jiha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 14:37:21 by jiha              #+#    #+#             */
/*   Updated: 2022/02/10 14:19:55 by jiha             ###   ########.fr       */
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

static int	ft_pass(char const *s, int i, char c)
{
	while (s[i] && s[i] == c)
		i++;
	return (i);
}

static int	ft_get_cnt(char const *s, char c)
{
	size_t	i;
	size_t	cnt;

	i = 0;
	cnt = 0;
	i = ft_pass(s, i, c);
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

static char	*ft_word_cpy(char *word, char const *s, char c, int *x)
{
	size_t	len;
	size_t	i;

	len = 0;
	while (s[*x + len] && s[*x + len] != c)
		len++;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!(word))
		return (0);
	i = 0;
	while (i < len)
	{
		word[i] = s[*x + i];
		i++;
	}
	*x += len;
	return(word);
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
	a = 0;
	x = 0;
	while (s[x] && (a < cnt))
	{
		x = ft_pass(s, x, c);
		ft_word_cpy(arr[a], s, c, &x);
		if (!(arr[a]))
			return (ft_free_error(arr));
		a++;
	}
	arr[a] = "\0";
	return (arr);
}

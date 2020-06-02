/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaptain <mcaptain@msk-school21.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 16:47:38 by mcaptain          #+#    #+#             */
/*   Updated: 2020/05/14 20:55:41 by mcaptain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		word_counter(char const *s, char c)
{
	int	i;
	int	flag;
	int	num;

	flag = 1;
	i = 0;
	num = 0;
	while (s[i])
	{
		if (s[i] != c && flag)
		{
			flag = 0;
			num++;
		}
		i++;
		if (s[i] == c)
			flag = 1;
	}
	return (num);
}

static	int		len_of_word(char const *s, char c)
{
	int			i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

static char		**set_free(char **set, int b)
{
	while (b != 0)
	{
		b--;
		free(set[b]);
		set[b] = 0;
	}
	free(set);
	set = 0;
	return (0);
}

static char		**str_cpy(char const *s, char **set, char c)
{
	int		i;
	int		k;
	int		b;
	int		counter;

	counter = word_counter(s, c);
	b = 0;
	i = 0;
	while (s[i] && b != counter)
	{
		k = 0;
		while (s[i] == c && s[i])
			i++;
		if (!(set[b] = malloc(sizeof(char) * (len_of_word(&s[i], c) + 1))))
			return (set_free(set, b));
		while (s[i] != c && s[i])
			set[b][k++] = s[i++];
		set[b++][k] = 0;
		while (s[i] == c && s[i])
			i++;
	}
	set[b] = 0;
	return (set);
}

char			**ft_split(char const *s, char c)
{
	char	**set;

	if (!s)
		return (0);
	if (!(set = malloc((word_counter(s, c) + 1) * sizeof(char *))))
		return (0);
	if (!str_cpy(s, set, c))
		return (0);
	return (set);
}

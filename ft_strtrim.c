/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaptain <mcaptain@msk-school21.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 15:44:58 by mcaptain          #+#    #+#             */
/*   Updated: 2020/05/11 00:34:13 by mcaptain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		trim_or_not(char s, char const *set)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (s == set[i])
			return (1);
		i++;
	}
	return (0);
}

static int		start(char const *s1, char const *set)
{
	int				i;

	i = 0;
	while (s1[i] && trim_or_not(s1[i], set))
		i++;
	return (i);
}

static int		end(char const *s1, char const *set)
{
	int	i;
	int	end;

	i = start(s1, set);
	end = i;
	while (s1[i])
	{
		if (!trim_or_not(s1[i], set))
			end = i + 1;
		i++;
	}
	return (end);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	char	*trim_str;
	int		i;
	int		start_i;
	int		end_i;

	if (!s1 || !set)
		return (0);
	start_i = start(s1, set);
	end_i = end(s1, set);
	trim_str = malloc((end_i - start_i + 1) * sizeof(char));
	i = 0;
	if (!trim_str)
		return (0);
	while (start_i + i < end_i)
	{
		trim_str[i] = s1[start_i + i];
		i++;
	}
	trim_str[i] = 0;
	return (trim_str);
}

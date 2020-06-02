/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaptain <mcaptain@msk-school21.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 15:31:40 by mcaptain          #+#    #+#             */
/*   Updated: 2020/05/19 19:09:59 by mcaptain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char const	*str1;
	char const	*str2;
	char		*newstr;
	char		*startnewstr;
	int			len;

	if (!s1 || !s2)
		return (0);
	str1 = s1;
	str2 = s2;
	len = ft_strlen(s1) + ft_strlen(s2);
	newstr = malloc((len + 1) * sizeof(char));
	if (!newstr)
		return (0);
	startnewstr = newstr;
	while (*str1 && len--)
		*newstr++ = *str1++;
	while (*str2 && len--)
		*newstr++ = *str2++;
	*newstr = '\0';
	return (startnewstr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaptain <mcaptain@msk-school21.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 02:04:21 by mcaptain          #+#    #+#             */
/*   Updated: 2020/05/15 17:25:23 by mcaptain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*temp;
	int		len;

	len = ft_strlen(s);
	temp = malloc((len + 1) * sizeof(char));
	if (temp)
	{
		temp[len] = '\0';
		while (len--)
			temp[len] = s[len];
		return (temp);
	}
	return (0);
}

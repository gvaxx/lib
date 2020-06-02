/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaptain <mcaptain@msk-school21.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 01:52:05 by mcaptain          #+#    #+#             */
/*   Updated: 2020/05/19 17:44:40 by mcaptain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_tolower_str(char *str)
{
	char *s;

	s = str;
	while(*s)
		*s++ = ft_tolower(*s);
	return(str);
}

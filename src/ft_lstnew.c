/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaptain <mcaptain@msk-school21.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 21:07:20 by mcaptain          #+#    #+#             */
/*   Updated: 2020/05/03 20:31:20 by mcaptain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_element;

	if ((new_element = malloc(sizeof(t_list))))
	{
		if (!content)
			new_element->content = NULL;
		else
			new_element->content = content;
		new_element->next = NULL;
	}
	return (new_element);
}

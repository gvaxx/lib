/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaptain <mcaptain@msk-school21.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 22:51:47 by mcaptain          #+#    #+#             */
/*   Updated: 2020/05/06 16:13:07 by mcaptain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list *temp;

	if (lst && f)
	{
		temp = lst;
		while (temp)
		{
			f(temp->content);
			temp = temp->next;
		}
	}
}

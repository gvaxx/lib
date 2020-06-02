/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaptain <mcaptain@msk-school21.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 22:29:26 by mcaptain          #+#    #+#             */
/*   Updated: 2020/05/06 16:12:52 by mcaptain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*d;

	if (lst && del)
	{
		temp = *lst;
		while (temp)
		{
			del(temp->content);
			d = temp;
			temp = temp->next;
			free(d);
		}
		*lst = 0;
	}
}

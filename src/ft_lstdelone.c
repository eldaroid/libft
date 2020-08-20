/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 18:50:55 by fgracefo          #+#    #+#             */
/*   Updated: 2020/08/20 09:16:50 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	if (!alst && *alst)
		return ;
	del((*alst)->content, (*alst)->content_size);
	free(*alst);
	*alst = NULL;
}

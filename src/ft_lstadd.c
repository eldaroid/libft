/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 18:47:46 by eldaroid          #+#    #+#             */
/*   Updated: 2020/08/20 09:16:46 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	t_list	*elem;

	elem = new;
	elem->next = *alst;
	*alst = elem;
}

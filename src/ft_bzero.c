/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 19:43:14 by fgracefo          #+#    #+#             */
/*   Updated: 2020/08/20 09:16:26 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char *a;

	a = (unsigned char *)s;
	if (n > 0)
	{
		while (n-- > 0)
			*(a++) = 0;
	}
	return ;
}

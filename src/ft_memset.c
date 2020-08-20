/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 18:27:45 by fgracefo          #+#    #+#             */
/*   Updated: 2020/08/20 09:17:26 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	unsigned char	value;

	ptr = (unsigned char *)b;
	value = (unsigned char)c;
	while (len--)
		*ptr++ = value;
	return (b);
}

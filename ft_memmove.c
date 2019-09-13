/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 20:09:26 by fgracefo          #+#    #+#             */
/*   Updated: 2019/09/12 03:28:09 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*str1;
	char				*str;

	str1 = dst;
	str = ft_strdup(src);
	while (len-- && *str)
		*(str1++) = *(str++);
	if (!*str)
		*str1 = *str;
	return (dst);
}

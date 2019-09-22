/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 18:17:13 by fgracefo          #+#    #+#             */
/*   Updated: 2019/09/22 20:17:57 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*str1;
	const unsigned char	*str2;

	str1 = (unsigned char *)dst;
	str2 = (unsigned char *)src;
	while (n > 0)
	{
		*str1 = *str2;
		str1++;
		str2++;
		n--;
	}
	return ((unsigned char *)dst);
}

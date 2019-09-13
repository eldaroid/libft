/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 18:58:08 by fgracefo          #+#    #+#             */
/*   Updated: 2019/09/11 21:49:03 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*str1;
	const unsigned char	*str2;

	str1 = dst;
	str2 = src;
	while (n > 0)
	{
		*(str1++) = *(str2++);
		if (*(str1 - 1) == c)
			return (str1);
		n--;
	}
	return (NULL);
}

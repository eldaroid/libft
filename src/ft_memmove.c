/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 20:09:26 by fgracefo          #+#    #+#             */
/*   Updated: 2020/08/20 09:17:24 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int				i;
	unsigned char	*dest2;
	unsigned char	*src2;

	i = -1;
	if (!dest && !src)
		return (0);
	dest2 = (unsigned char *)dest;
	src2 = (unsigned char *)src;
	if (src < dest)
		while (n--)
			dest2[n] = src2[n];
	else
		while (++i < (int)n)
			dest2[i] = src2[i];
	return (dest);
}

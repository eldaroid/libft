/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 16:10:27 by fgracefo          #+#    #+#             */
/*   Updated: 2020/08/20 09:18:40 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	len1;

	len1 = 0;
	while (*src && len1 < len)
	{
		*(dst++) = *(src++);
		len1++;
	}
	while (len1 < len)
	{
		*(dst++) = '\0';
		len1++;
	}
	return (dst - len1);
}

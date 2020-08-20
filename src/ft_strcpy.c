/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 15:41:18 by fgracefo          #+#    #+#             */
/*   Updated: 2020/08/20 09:18:06 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	size_t	len;

	len = 0;
	while (*src)
	{
		*(dst++) = *(src++);
		len++;
	}
	*dst = *src;
	return (dst - len);
}

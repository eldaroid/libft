/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 22:02:55 by fgracefo          #+#    #+#             */
/*   Updated: 2019/09/13 22:31:19 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	res;

	res = 0;
	while (*s)
	{
		if (*s == c)
			res = c;
		s++;
	}
	if (c == '\0')
		return ((char*)s);
	else
		return ((char*)res);
}

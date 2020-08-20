/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 17:30:49 by fgracefo          #+#    #+#             */
/*   Updated: 2020/08/20 09:18:13 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	if (!s1 || !s2)
		return (s1 == s2 ? 1 : 0);
	if (ft_strlen((char *)s1) != ft_strlen((char *)s2) || !s1 || !s2)
		return (0);
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (0);
		s1++;
		s2++;
	}
	return (1);
}

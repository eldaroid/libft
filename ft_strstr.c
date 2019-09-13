/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 22:32:34 by fgracefo          #+#    #+#             */
/*   Updated: 2019/09/13 23:00:28 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;
	size_t	pos;

	j = 0;
	i = 0;
	if (*s2 == '\0')
		return (*s2);
	while (s1[i])
	{
		j = 0;
		pos = i;
		while (s1[pos] == s2[j])
		{
			pos++;
			j++;
		}
		if (ft_strlen(s2) == j)
			return ((char)i);
		i++;
	}
	return (0);
}

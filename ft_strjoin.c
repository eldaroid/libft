/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 18:14:54 by fgracefo          #+#    #+#             */
/*   Updated: 2019/09/22 18:47:55 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	char	*new;

	size = 0;
	if (s1 && s2)
		size = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	else if (!s1)
		return (ft_strdup(s2));
	else if (!s2)
		return (ft_strdup(s1));
	if ((new = (char *)malloc(sizeof(char) * size)) && (s1 || s2))
	{
		size = 0;
		while (*s1)
			new[size++] = *(s1++);
		while (*s2)
			new[size++] = *(s2++);
		new[size] = '\0';
	}
	return (new);
}

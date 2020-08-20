/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 03:56:17 by fgracefo          #+#    #+#             */
/*   Updated: 2020/08/20 09:18:37 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int		i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && i < n - 1)
	{
		if (s1[i] == '\0' || s2[i] == '\0')
			return (0);
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

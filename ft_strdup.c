/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 01:56:19 by fgracefo          #+#    #+#             */
/*   Updated: 2019/09/12 02:04:25 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	char	*str;

	i = 0;
	while (src[i])
		i++;
	str = (char *)malloc(sizeof(char) * i + 1);
	if (str)
	{
		i = 0;
		while (src[i])
		{
			str[i] = src[i];
			i++;
		}
		str[i] = '\0';
		return (str);
	}
	else
		return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 01:56:19 by fgracefo          #+#    #+#             */
/*   Updated: 2020/08/20 09:18:10 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	char	*str;

	i = 0;
	if ((str = (char *)malloc(sizeof(char) * ft_strlen(src) + 1)))
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
	return (NULL);
}

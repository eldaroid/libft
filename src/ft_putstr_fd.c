/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 18:16:47 by fgracefo          #+#    #+#             */
/*   Updated: 2020/08/20 09:17:48 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	int		i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}

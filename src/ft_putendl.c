/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 14:26:35 by eldaroid          #+#    #+#             */
/*   Updated: 2020/08/20 09:17:35 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

void	ft_putendl(char const *s)
{
	int		i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
	ft_putchar('\n');
}

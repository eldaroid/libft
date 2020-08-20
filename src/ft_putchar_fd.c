/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 14:34:50 by eldaroid          #+#    #+#             */
/*   Updated: 2020/08/20 09:17:32 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, sizeof(c));
}

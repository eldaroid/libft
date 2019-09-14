/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 19:05:57 by fgracefo          #+#    #+#             */
/*   Updated: 2019/09/14 19:19:54 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int    ft_atoi(const char *str)
{
    int    res;
    int    negative;

    negative = 1;
    res = 0;
    while (ft_isspace(*str))
        ++str;
    if (*str == '-')
        negative = -1;
    if (*str == '-' || *str == '+')
        ++str;
    while (ft_isdigit(*str))
    {
        res = res * 10 + (*str - 48);
        ++str;
    }
    return (res * negative);
}

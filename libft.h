/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 18:23:03 by fgracefo          #+#    #+#             */
/*   Updated: 2019/09/13 14:00:12 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdlib.h>

void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memmove(void *dst, const void *src, size_t len);
char	*ft_strdup(const char *src);
void	*ft_memchr(const void *s, int c, size_t n);
int	ft_strlen(char *str);
char	*ft_strdup(const char *src);
int	ft_strcmp(char *s1, char *s2);
int	ft_strncmp(char *s1, char *s2, unsigned int n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);

#endif

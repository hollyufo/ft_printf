/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imchaibi <imchaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 16:15:15 by imchaibi          #+#    #+#             */
/*   Updated: 2024/11/16 16:24:57 by imchaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h> 
# include <unistd.h>
# include <stdint.h>

size_t	ft_strlen(const char *str);
int		ft_printf(const char *format, ...);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_calloc(size_t count, size_t size);
void	ft_bzero(void *s, size_t n);
void	ft_putchar_fd(char c, int fd);
# endif

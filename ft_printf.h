/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imchaibi <imchaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 16:15:15 by imchaibi          #+#    #+#             */
/*   Updated: 2024/11/23 16:05:42 by imchaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h> 
# include <unistd.h>
# include <stdint.h>
# include <limits.h>

int		ft_printf(const char *format, ...);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putnbr_unsigned_fd(unsigned int n, int fd);
void	ft_putptr_fd(void *ptr, int fd);
void	ft_puthex(unsigned int num, int fd, char case_type);
void	ft_putfloat_fd(double n, int fd, int precision);
#endif

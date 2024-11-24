/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imchaibi <imchaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 12:46:42 by imchaibi          #+#    #+#             */
/*   Updated: 2024/11/24 16:08:14 by imchaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	void	ft_handle_format(const char *format, va_list args, int fd, int *count)
{
	if (*format == 's')
		ft_putstr_fd(va_arg(args, char *), fd, count);
	else if (*format == 'd' || *format == 'i')
		ft_putnbr_fd(va_arg(args, int), fd, count);
	else if (*format == 'c')
		ft_putchar_fd(va_arg(args, int), fd, count);
	else if (*format == 'f')
		ft_putfloat_fd(va_arg(args, double), fd, 6, count);
	else if (*format == 'p')
		ft_putptr_fd(va_arg(args, void *), fd, count);
	else if (*format == 'u')
		ft_putnbr_unsigned_fd(va_arg(args, unsigned int), fd, count);
	else if (*format == 'x' || *format == 'X')
		ft_puthex(va_arg(args, unsigned int), fd, *format, count);
	else
		ft_putchar_fd(*format, fd, count);
}

int ft_printf(const char *format, ...)
{
    va_list args;
    int count;

    va_start(args, format);
    count = 0;
    while (*format)
    {
        if (*format == '%')
        {
            format++;
            ft_handle_format(format, args, 1, &count);
        }
        else
        {
            ft_putchar_fd(*format, 1, &count);
        }
        format++;
    }
    va_end(args);
    return (count);
}


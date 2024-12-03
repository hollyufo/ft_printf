/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imchaibi <imchaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 12:46:42 by imchaibi          #+#    #+#             */
/*   Updated: 2024/12/03 14:09:38 by imchaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	void	ft_handle_format(const char *form, va_list args, int fd, int *c)
{
	if (*form == 's')
		ft_putstr_fd(va_arg(args, char *), fd, c);
	else if (*form == 'd')
		ft_putnbr_fd(va_arg(args, int), fd, c);
	else if (*form == 'i')
		ft_putnbr_fd(va_arg(args, int), fd, c);
	else if (*form == 'c')
		ft_putchar_fd(va_arg(args, int), fd, c);
	else if (*form == 'f')
		ft_putfloat_fd(va_arg(args, double), fd, 6, c);
	else if (*form == 'p')
		ft_putptr_fd(va_arg(args, void *), fd, c);
	else if (*form == 'u')
		ft_putnbr_unsigned_fd(va_arg(args, unsigned int), fd, c);
	else if (*form == 'x' || *form == 'X')
		ft_puthex(va_arg(args, unsigned int), fd, *form, c);
	else
		ft_putchar_fd(*form, fd, c);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

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

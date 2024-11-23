/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imchaibi <imchaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 12:46:42 by imchaibi          #+#    #+#             */
/*   Updated: 2024/11/23 13:33:46 by imchaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	void	ft_handle_format(const char *format, va_list args, int fd)
{
	if (*format == 's')
		ft_putstr_fd(va_arg(args, char *), fd);
	else if (*format == 'd' || *format == 'i')
		ft_putnbr_fd(va_arg(args, int), fd);
	else if (*format == 'c')
		ft_putchar_fd(va_arg(args, int), fd);
	else if (*format == 'f')
		ft_putfloat_fd(va_arg(args, double), fd, 6);
	else if (*format == 'p')
		ft_putptr_fd(va_arg(args, void *), fd);
	else if (*format == 'u')
		ft_putnbr_unsigned_fd(va_arg(args, unsigned int), fd);
	else if (*format == 'x')
		ft_puthex_lower_fd(va_arg(args, unsigned int), fd);
	else if (*format == 'X')
		ft_puthex_upper_fd(va_arg(args, unsigned int), fd);
	else
		ft_putchar_fd(*format, fd);
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
			ft_handle_format(format, args, 1);
			count++;
		}
		else
			ft_putchar_fd(*format, 1);
		format++;
	}
	va_end(args);
	return (count);
}

int main(void)
{
    int ret_ft, ret_std;

    printf("==== Testing ft_printf against printf ====\n\n");

    // Test %c
    printf("Test %%c:\n");
    ret_std = printf("printf: [%c]\n", 'A');
    ret_ft = ft_printf("ft_printf: [%c]\n", 'A');
    printf("Return values: printf = %d, ft_printf = %d\n\n", ret_std, ret_ft);

    // Test %s
    printf("Test %%s:\n");
    ret_std = printf("printf: [%s]\n", "Hello, world!");
    ret_ft = ft_printf("ft_printf: [%s]\n", "Hello, world!");
    printf("Return values: printf = %d, ft_printf = %d\n\n", ret_std, ret_ft);

    // Test %p
    printf("Test %%p:\n");
    void *ptr = &ret_std;
    ret_std = printf("printf: [%p]\n", ptr);
    ret_ft = ft_printf("ft_printf: [%p]\n", ptr);
    printf("Return values: printf = %d, ft_printf = %d\n\n", ret_std, ret_ft);

    // Test %d and %i
    printf("Test %%d and %%i:\n");
    ret_std = printf("printf: [%d] [%i]\n", INT_MIN, INT_MAX);
    ret_ft = ft_printf("ft_printf: [%d] [%i]\n", INT_MIN, INT_MAX);
    printf("Return values: printf = %d, ft_printf = %d\n\n", ret_std, ret_ft);

    // Test %u
    printf("Test %%u:\n");
    ret_std = printf("printf: [%u]\n", UINT_MAX);
    ret_ft = ft_printf("ft_printf: [%u]\n", UINT_MAX);
    printf("Return values: printf = %d, ft_printf = %d\n\n", ret_std, ret_ft);

    // Test %x and %X
    printf("Test %%x and %%X:\n");
    ret_std = printf("printf: [%x] [%X]\n", 255, 255);
    ret_ft = ft_printf("ft_printf: [%x] [%X]\n", 255, 255);
    printf("Return values: printf = %d, ft_printf = %d\n\n", ret_std, ret_ft);

    // Test %% (percent sign)
    printf("Test %%%%:\n");
    ret_std = printf("printf: [%%]\n");
    ret_ft = ft_printf("ft_printf: [%%]\n");
    printf("Return values: printf = %d, ft_printf = %d\n\n", ret_std, ret_ft);

    // Test %f
    printf("Test %%f:\n");
    ret_std = printf("printf: [%f]\n", 123.456789);
    ret_ft = ft_printf("ft_printf: [%f]\n", 123.456789);
    printf("Return values: printf = %d, ft_printf = %d\n\n", ret_std, ret_ft);

    // Test combinations
    printf("Test combinations:\n");
    ret_std = printf("printf: [%d] [%s] [%x] [%c] [%p] [%%]\n", 42, "test", 255, 'A', ptr);
    ret_ft = ft_printf("ft_printf: [%d] [%s] [%x] [%c] [%p] [%%]\n", 42, "test", 255, 'A', ptr);
    printf("Return values: printf = %d, ft_printf = %d\n\n", ret_std, ret_ft);

    return 0;
}
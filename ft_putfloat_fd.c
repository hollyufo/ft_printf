/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfloat_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imchaibi <imchaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 13:34:43 by imchaibi          #+#    #+#             */
/*   Updated: 2024/11/23 13:34:46 by imchaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_putfloat_fd(double d, int fd, int precision)
{
	long int integer_part;
	double fractional_part;
	int i;

	// Handle negative numbers
	if (d < 0)
	{
		ft_putchar_fd('-', fd);
		d = -d;
	}

	// Extract integer and fractional parts
	integer_part = (long)d;
	fractional_part = d - integer_part;

	// Print integer part
	ft_putnbr_fd(integer_part, fd);

	// Print decimal point
	ft_putchar_fd('.', fd);

	// Print fractional part up to the specified precision
	i = 0;
	while (i < precision)
	{
		fractional_part *= 10;
		ft_putchar_fd((long)fractional_part % 10 + '0', fd);
		i++;
	}
}
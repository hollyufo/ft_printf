/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfloat_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imchaibi <imchaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 13:34:43 by imchaibi          #+#    #+#             */
/*   Updated: 2024/11/24 15:00:44 by imchaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putfloat_fd(double d, int fd, int precision, int *count)
{
	long int	integer_part;
	double		fractional_part;
	int			i;

	if (d < 0)
	{
		ft_putchar_fd('-', fd, count);
		d = -d;
	}
	integer_part = (long)d;
	fractional_part = d - integer_part;
	ft_putnbr_fd(integer_part, fd, count);
	ft_putchar_fd('.', fd, count);
	i = 0;
	while (i < precision)
	{
		fractional_part *= 10;
		ft_putchar_fd((long)fractional_part % 10 + '0', fd, count);
		i++;
	}
}

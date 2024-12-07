/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned_fd.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imchaibi <imchaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 13:35:16 by imchaibi          #+#    #+#             */
/*   Updated: 2024/11/24 15:01:28 by imchaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_unsigned_fd(unsigned int nb, int fd, int *count)
{
	if (nb >= 10)
	{
		ft_putnbr_unsigned_fd(nb / 10, fd, count);
	}
	ft_putchar_fd((nb % 10) + '0', fd, count);
}

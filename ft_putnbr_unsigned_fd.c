/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned_fd.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imchaibi <imchaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 13:35:16 by imchaibi          #+#    #+#             */
/*   Updated: 2024/11/23 13:35:19 by imchaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_putnbr_unsigned_fd(unsigned int nb, int fd)
{
	if (nb >= 10)
	{
		ft_putnbr_unsigned_fd(nb / 10, fd);
	}
	ft_putchar_fd((nb % 10) + '0', fd);
}
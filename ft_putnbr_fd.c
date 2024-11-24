/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imchaibi <imchaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 13:35:05 by imchaibi          #+#    #+#             */
/*   Updated: 2024/11/24 14:57:12 by imchaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_fd(int nb, int fd, int *count)
{
	long int	num;

	num = nb;
	if (num < 0)
	{
		ft_putchar_fd('-', fd, count);
		num = -num;
	}
	if (num >= 10)
	{
		ft_putnbr_fd(num / 10, fd, count);
	}
	ft_putchar_fd((num % 10) + '0', fd, count);
}

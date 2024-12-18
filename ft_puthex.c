/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hollyufo <hollyufo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 13:34:55 by imchaibi          #+#    #+#             */
/*   Updated: 2024/11/25 21:39:58 by hollyufo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned long num, int fd, char case_type, int *count)
{
	const char	*hex;

	if (case_type == 'X')
		hex = "0123456789ABCDEF";
	else
		hex = "0123456789abcdef";
	if (num >= 16)
		ft_puthex(num / 16, fd, case_type, count);
	ft_putchar_fd(hex[num % 16], fd, count);
}

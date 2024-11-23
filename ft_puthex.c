/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imchaibi <imchaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 13:34:55 by imchaibi          #+#    #+#             */
/*   Updated: 2024/11/23 13:34:57 by imchaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_puthex_lower_fd(unsigned int num, int fd)
{
	char *hex = "0123456789abcdef";

	if (num >= 16)
		ft_puthex_lower_fd(num / 16, fd);
	ft_putchar_fd(hex[num % 16], fd);
}

void ft_puthex_upper_fd(unsigned int num, int fd)
{
	char *hex = "0123456789ABCDEF";

	if (num >= 16)
		ft_puthex_upper_fd(num / 16, fd);
	ft_putchar_fd(hex[num % 16], fd);
}
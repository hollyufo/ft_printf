/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imchaibi <imchaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 13:35:23 by imchaibi          #+#    #+#             */
/*   Updated: 2024/11/23 13:35:26 by imchaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_puthex_fd(unsigned long num, int fd)
{
	char *hex = "0123456789abcdef";

	if (num >= 16)
		ft_puthex_fd(num / 16, fd);
	ft_putchar_fd(hex[num % 16], fd);
}
void ft_putptr_fd(void *ptr, int fd)
{
	unsigned long address;

	address = (unsigned long)ptr;
	ft_putstr_fd("0x", fd);
	ft_puthex_fd(address, fd); // Pass the cast address
}
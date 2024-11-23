/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imchaibi <imchaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 13:35:23 by imchaibi          #+#    #+#             */
/*   Updated: 2024/11/23 16:02:24 by imchaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr_fd(void *ptr, int fd)
{
	unsigned long	address;

	address = (unsigned long)ptr;
	ft_putstr_fd("0x", fd);
	ft_puthex(address, fd, 'x');
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hollyufo <hollyufo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 13:35:23 by imchaibi          #+#    #+#             */
/*   Updated: 2024/11/25 21:38:26 by hollyufo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr_fd(void *ptr, int fd, int *count)
{
	unsigned long	address;

	if (!ptr)
	{
		ft_putstr_fd("(nil)", fd, count);
		return ;
	}
	address = (unsigned long)ptr;
	ft_putstr_fd("0x", fd, count);
	ft_puthex(address, fd, 'x', count);
}

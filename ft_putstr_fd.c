/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imchaibi <imchaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 13:35:40 by imchaibi          #+#    #+#             */
/*   Updated: 2024/11/23 15:28:55 by imchaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	if (!s)
	{
		write(fd, "(null)", 6);
		return ;
	}
	i = 0;
	while (s[i])
		i++;
	write(fd, s, i);
}

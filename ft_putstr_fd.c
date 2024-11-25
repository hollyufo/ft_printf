/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hollyufo <hollyufo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 13:35:40 by imchaibi          #+#    #+#             */
/*   Updated: 2024/11/25 21:36:32 by hollyufo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_fd(char *s, int fd, int *count)
{
	size_t	i;

	if (!s)
	{
		write(fd, "(null)", 6);
		(*count) = (*count) + 6;
		return ;
	}
	i = 0;
	while (s[i])
		i++;
	(*count) = (*count) + i;
	write(fd, s, i);
}

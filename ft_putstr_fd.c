/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imchaibi <imchaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 15:26:50 by imchaibi          #+#    #+#             */
/*   Updated: 2024/11/16 16:18:43 by imchaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	if (!s)
	{
		return ;
	}
	i = 0;
	while (s[i])
		i++;
	write(fd, s, i);
}

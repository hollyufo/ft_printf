/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imchaibi <imchaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 16:06:33 by imchaibi          #+#    #+#             */
/*   Updated: 2024/11/24 17:31:12 by imchaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
    int ret_ft, ret_std;
    void *ptr = &ret_std;
    void *null_ptr = NULL;

    printf("Testing pointers:\n");

    // Valid pointer
    ret_std = printf("printf: [%p]\n", ptr);
    ret_ft = ft_printf("ft_printf: [%p]\n", ptr);
    printf("Return values:\nprintf    = %d\nft_printf = %d\n\n", ret_std, ret_ft);

    // NULL pointer
    ret_std = printf("   printf: [%p]\n", null_ptr);
    ret_ft = ft_printf("ft_printf: [%p]\n", null_ptr);
    printf("Return values:\nprintf    = %d\nft_printf = %d\n", ret_std, ret_ft);

    return 0;
}
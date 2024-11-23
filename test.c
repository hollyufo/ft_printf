/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imchaibi <imchaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 16:06:33 by imchaibi          #+#    #+#             */
/*   Updated: 2024/11/23 16:10:02 by imchaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
    int ret_ft, ret_std;

    printf("==== Testing ft_printf against printf ====\n\n");

    // Test %c
    printf("Test %%c:\n");
    ret_std = printf("printf: [%c]\n", 'A');
    ret_ft = ft_printf("ft_printf: [%c]\n", 'A');
    printf("Return values: printf = %d, ft_printf = %d\n\n", ret_std, ret_ft);

    // Test %s
    printf("Test %%s:\n");
    ret_std = printf("printf: [%s]\n", "Hello, world!");
    ret_ft = ft_printf("ft_printf: [%s]\n", "Hello, world!");
    printf("Return values: printf = %d, ft_printf = %d\n\n", ret_std, ret_ft);

    // Test %p
    printf("Test %%p:\n");
    void *ptr = &ret_std;
    ret_std = printf("printf: [%p]\n", ptr);
    ret_ft = ft_printf("ft_printf: [%p]\n", ptr);
    printf("Return values: printf = %d, ft_printf = %d\n\n", ret_std, ret_ft);

    // Test %d and %i
    printf("Test %%d and %%i:\n");
    ret_std = printf("printf: [%d] [%i]\n", INT_MIN, INT_MAX);
    ret_ft = ft_printf("ft_printf: [%d] [%i]\n", INT_MIN, INT_MAX);
    printf("Return values: printf = %d, ft_printf = %d\n\n", ret_std, ret_ft);

    // Test %u
    printf("Test %%u:\n");
    ret_std = printf("printf: [%u]\n", UINT_MAX);
    ret_ft = ft_printf("ft_printf: [%u]\n", UINT_MAX);
    printf("Return values: printf = %d, ft_printf = %d\n\n", ret_std, ret_ft);

    // Test %x and %X
    printf("Test %%x and %%X:\n");
    ret_std = printf("printf: [%x] [%X]\n", 255, 255);
    ret_ft = ft_printf("ft_printf: [%x] [%X]\n", 255, 255);
    printf("Return values: printf = %d, ft_printf = %d\n\n", ret_std, ret_ft);

    // Test %% (percent sign)
    printf("Test %%%%:\n");
    ret_std = printf("printf: [%%]\n");
    ret_ft = ft_printf("ft_printf: [%%]\n");
    printf("Return values: printf = %d, ft_printf = %d\n\n", ret_std, ret_ft);

    // Test %f
    printf("Test %%f:\n");
    ret_std = printf("printf: [%f]\n", 123.456789);
    ret_ft = ft_printf("ft_printf: [%f]\n", 123.456789);
    printf("Return values: printf = %d, ft_printf = %d\n\n", ret_std, ret_ft);

    // Test combinations
    printf("Test combinations:\n");
    ret_std = printf("printf: [%d] [%s] [%x] [%c] [%p] [%%]\n", 42, "test", 255, 'A', ptr);
    ret_ft = ft_printf("ft_printf: [%d] [%s] [%x] [%c] [%p] [%%]\n", 42, "test", 255, 'A', ptr);
    printf("Return values: printf = %d, ft_printf = %d\n\n", ret_std, ret_ft);

    return 0;
}
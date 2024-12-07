/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imchaibi <imchaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 16:06:33 by imchaibi          #+#    #+#             */
/*   Updated: 2024/12/06 17:55:38 by imchaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdio.h>
#include "ft_printf.h"


int main() {
    // // Test %c (Character)
    // char c = 'A';
    // printf("Original printf: "); printf("%c\n", c);
    // ft_printf("ft_printf: %c\n", c);
    
    // // Test %s (String)
    // char *str = "Hello, World!";
    // printf("Original printf: "); printf("%s\n", str);
    // ft_printf("ft_printf: %s\n", str);
    
    // // Test %p (Pointer)
    // int x = 42;
    // printf("Original printf: "); printf("%p\n", &x);
    // ft_printf("ft_printf: %p\n", &x);

    // // Test %d and %i (Decimal Integer)
    // int d = -12345;
    // printf("Original printf: "); printf("%d\n", d);
    // ft_printf("ft_printf: %d\n", d);

    // // Test %u (Unsigned Decimal Integer)
    // unsigned int u = 12345;
    // printf("Original printf: "); printf("%u\n", u);
    // ft_printf("ft_printf: %u\n", u);
    
    // // Test %x (Hexadecimal lowercase)
    // unsigned int y = 255;
    // printf("Original printf: "); printf("%x\n", y);
    // ft_printf("ft_printf: %x\n", y);
    
    // // Test %X (Hexadecimal uppercase)
    // printf("Original printf: "); printf("%X\n", y);
    // ft_printf("ft_printf: %X\n", y);
    
    // // Test %% (Percentage sign)
    // printf("Original printf: "); printf("%%\n");
    // ft_printf("ft_printf: %%\n");
    
    // ft_printf("ft_printf: %s\n", "");
    // printf("printf: %s\n", "");
    // ft_printf("ft_printf: %s\n", NULL);
    // printf("ft_printf: %s\n", NULL);

    // // testing return value for both printf and ft_printf
    // int ret = ft_printf("ft_printf: %s\n", "Hello, World!");
    // printf("ft_printf return value: %d\n", ret);
    // ret = printf("   printf: %s\n", "Hello, World!");
    // printf("printf return value: %d\n", ret);
    
    int count1 = ft_printf(NULL);
    ft_printf("ft_printf count: %d\n", count1);
    return 0;
}

//
//  ft_print_comb2.c
//  42_C_piscine
//
//  Created by 游宗諭 on 2020/8/7.
//  Copyright © 2020 游宗諭. All rights reserved.
//

#include "ft_print_comb2.h"
#include "ft_putchar.h"
void ft_putnum(int n);
void ft_print_combo2_recursive(int a,int b);
void ft_print_comb2(void) {
    ft_print_combo2_recursive(0, 1);
}
void ft_print_combo2_recursive(int a,int b) {
    ft_putnum(a);
    ft_putchar(' ');
    ft_putnum(b);
    if (a == 98 && b==99) return;
    ft_putchar(',');
    ft_putchar(' ');
    (b == 99)
    ? ft_print_combo2_recursive(a+1, a+2)
    : ft_print_combo2_recursive(a, b+1);
}
void ft_putnum(int n) {
    ft_putchar(n/10 + '0');
    ft_putchar(n%10 + '0');
}


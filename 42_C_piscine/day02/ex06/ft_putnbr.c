//
//  ft_putnbr.c
//  42_C_piscine
//
//  Created by 游宗諭 on 2020/8/7.
//  Copyright © 2020 游宗諭. All rights reserved.
//

#include "ft_putnbr.h"
#include "ft_putchar.h"
void ft_nbr_recursive(long l);
void ft_putnbr(int nb) {
    if (nb == 0) return ft_putchar('0');
    long l;
    l = nb;
    short sign;
    sign = l >= 0 ? 1 : -1;
    ft_putchar(sign == 1 ? '\0' : '-');
    ft_nbr_recursive(l*sign);
}

void ft_nbr_recursive(long l) {
    if (l == 0) return;
    ft_nbr_recursive(l / 10);
    ft_putchar(l % 10 + '0');
}

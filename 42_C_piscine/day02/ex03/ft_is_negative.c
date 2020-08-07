//
//  ft_is_negative.c
//  42_C_piscine
//
//  Created by 游宗諭 on 2020/8/7.
//  Copyright © 2020 游宗諭. All rights reserved.
//

#include "ft_is_negative.h"
#include "ft_putchar.h"

void ft_is_negative(int n) {
    char r;
    r = n < 0 ? 'N' : 'P';
    ft_putchar(r);
}

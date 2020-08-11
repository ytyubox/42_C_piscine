//
//  ft_swap.c
//  42_C_piscine
//
//  Created by 游宗諭 on 2020/8/11.
//  Copyright © 2020 游宗諭. All rights reserved.
//

#include "ft_swap.h"
void ft_swap(int *a, int *b) {
    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
}

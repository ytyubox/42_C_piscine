//
//  ft_print_reverse_alphabet.c
//  42_C_piscine
//
//  Created by 游宗諭 on 2020/8/7.
//  Copyright © 2020 游宗諭. All rights reserved.
//

#include "ft_print_reverse_alphabet.h"

#include "ft_putchar.h"
void ft_print_reverse_alphabet(void) {
    char c;
    c = 'z';
    while (1) {
        ft_putchar(c);
        if (c == 'a') return;
        c--;
    }
}

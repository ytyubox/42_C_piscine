//
//  ft_print_alphabet.c
//  42_C_piscine
//
//  Created by 游宗諭 on 2020/8/7.
//  Copyright © 2020 游宗諭. All rights reserved.
//

#include "ft_print_alphabet.h"
#include "ft_putchar.h"
void ft_print_alphabet(void) {
    char c;
    c = 'a';
    while (1) {
        ft_putchar(c);
        if (c == 'z') return;
        c++;
        
    }
}

    //
    //  ft_print_comb.c
    //  42_C_piscine
    //
    //  Created by 游宗諭 on 2020/8/7.
    //  Copyright © 2020 游宗諭. All rights reserved.
    //

#include "ft_print_comb.h"
#include "ft_putchar.h"
void ft_putdigits(char digits[static 3]);
void ft_putcomma (char digits[static 3]);
int ft_should_stop(char digits[static 3]);
void ft_print_comb(void) {
    char digits[3];
    digits[0] = '0';
    while (1) {
        digits[0]++;
        digits[1] = digits[0];
        digits[2] = digits[1] + 1;
        while (1) {
            if (digits[1] == '8') break;
            digits[1]++;
            while (1) {
                if (digits[2] == '9') break;
                digits[2]++;
                ft_putdigits(digits);
                if (ft_should_stop(digits)) return;
                ft_putcomma(digits);
            }
        }
        
        
    }
}


void ft_putdigits(char digits[static 3]) {
    ft_putchar(digits[0]);
    ft_putchar(digits[1]);
    ft_putchar(digits[2]);
}

void ft_putcomma (char digits[static 3]) {
    ft_putchar(',');
    ft_putchar(' ');
}

int ft_should_stop(char digits[static 3]) {
    return (
            digits[0] == '7' &&
            digits[1] == '8' &&
            digits[2] == '9');
}

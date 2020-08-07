//
//  main.c
//  42_C_piscine
//
//  Created by 游宗諭 on 2020/8/6.
//  Copyright © 2020 游宗諭. All rights reserved.
//


#include "ft_putchar.h"
#include "day02.h"
#include <limits.h>
int main(int argc, const char * argv[]) {
    // insert code here...
    ft_print_alphabet();
    ft_putchar('\n');
    ft_print_reverse_alphabet();
    ft_putchar('\n');
    ft_print_numbers();
    ft_putchar('\n');
    ft_is_negative(1);
    ft_is_negative(0);
    ft_is_negative(-1);
    ft_putchar('\n');
    ft_print_comb();
    ft_putchar('\n');
    ft_print_comb2();
    ft_putchar('\n');
    ft_putnbr(42);
    ft_putchar('\n');
    ft_putnbr(-42);
    ft_putchar('\n');
    ft_putnbr(INT_MAX);
    ft_putchar('\n');
    ft_putnbr(INT_MIN);
    ft_putchar('\n');
    ft_putnbr(0);
    ft_putchar('\n');
    for (int combon = 1; combon < 10 ; combon++) {
        ft_print_combn(combon);
        ft_putchar('\n');
    }
    return 0;
}

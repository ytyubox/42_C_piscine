    //
    //  ft_print_combn.c
    //  42_C_piscine
    //
    //  Created by 游宗諭 on 2020/8/7.
    //  Copyright © 2020 游宗諭. All rights reserved.
    //

#include "ft_print_combn.h"
#include "ft_putchar.h"
int ft_combon_max(int length, int i);
short ft_combon_should_pass(int n);
void ft_combon_print(int length,int a);
void ft_print_combn(int n) {
    int a;
    a = 0;
    int top;
    top = ft_combon_max(n,0);
    while (1) {
        a++;
        if (ft_combon_should_pass(a)) {continue;};
        ft_combon_print(n, a);
        if (a >= top) return;
        ft_putchar(',');
        ft_putchar(' ');
    }
}
int ft_combon_max(int length, int i) {
    return (length == 1)
    ? i+10-length
    : ft_combon_max(length - 1, (i + 10-length)*10);
}
void ft_combon_print(int length,int a) {
    if (length == 0) return;
    ft_combon_print(length - 1, a / 10);
    ft_putchar(a%10+'0');
    
}

short ft_combon_should_pass(int n) {
    if (n%10 == 0) return 1;
    short c = n % 10;
    n /= 10;
    while (n > 0) {
        if (c <= n % 10) return 1;
        c = n % 10;
        n /= 10;
    }
    return 0;
}

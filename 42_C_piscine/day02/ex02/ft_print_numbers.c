
#include "ft_print_numbers.h"
#include "ft_putchar.h"
void ft_print_numbers(void) {
    char c = '0';
    while (1) {
        ft_putchar(c);
        if (c == '9') return;
        c++;
    }
}


//
//  ft_putchar.c
//  42_C_piscine
//
//  Created by 游宗諭 on 2020/8/6.
//  Copyright © 2020 游宗諭. All rights reserved.
//

#include "ft_putchar.h"
#include <unistd.h>
void ft_putchar(char c) {
    write(STDOUT_FILENO,&c,1);
}

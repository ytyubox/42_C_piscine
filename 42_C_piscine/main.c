#include "ftlib/ft_putchar.h"
#include <string.h>
#include "day02/day02.h"
//#include "day03/day03.h"

int main(int argc, const char * argv[]) {
        // insert code here...
    printf("start");
    if (argc < 2) return argc;
    if (strcmp(argv[01], "02") == 0)
        test_day02();
//    if (strcmp(argv[01], "03") == 0)
//        test_day03();
    return 0;
}

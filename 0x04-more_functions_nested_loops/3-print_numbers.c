#include "main.h"
#include <stdio.h>

void _putchar(char c) {
    putchar(c);
}

void print_numbers(void) {
    int i;
    for (i = 0; i <= 9; i++) {
        _putchar(i + '0');  
    }
    _putchar('\n');  
}

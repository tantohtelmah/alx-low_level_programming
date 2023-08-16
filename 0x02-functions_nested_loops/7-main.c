#include <stdio.h>
#include "main.h"
#include "7-print_last_digit.h"
#include "_putchar.h"

/**
 * main - Ckecks for alphabets 
 *
 * Return: 1 if 'n' is positive, 0 if 'n' is zero and -1 if 'n' is negative.
 */

int main(void)
{
    int r;

    print_last_digit(98);
    print_last_digit(0);
    r = print_last_digit(-1024);
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}

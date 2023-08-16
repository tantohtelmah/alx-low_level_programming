#include <stdio.h>
#include "main.h"
#include "5-sign.h"
#include "_putchar.h"

/**
 * main - Ckecks for alphabets 
 *
 * Return: 1 if 'n' is positive, 0 if 'n' is zero and -1 if 'n' is negative.
 */

int main(void)
{
    int r;

    r = print_sign(98);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    r = print_sign(0);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    r = print_sign(0xff);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    r = print_sign(-1);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}

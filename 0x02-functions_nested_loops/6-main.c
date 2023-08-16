#include <stdio.h>
#include "main.h"
#include "6-abs.h"
#include "_putchar.h"

/**
 * main - Ckecks for alphabets 
 *
 * Return: 1 if 'n' is positive, 0 if 'n' is zero and -1 if 'n' is negative.
 */

int main(void)
{
    int r;

    r = _abs(-1);
    printf("%d\n", r);
    r = _abs(0);
    printf("%d\n", r);
    r = _abs(1);
    printf("%d\n", r);
    r = _abs(-98);
    printf("%d\n", r);
    return (0);
}

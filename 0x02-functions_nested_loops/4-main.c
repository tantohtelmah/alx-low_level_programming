#include <stdio.h>
#include "main.h"
#include "4-isalpha.h"
#include "_putchar.h"

/**
 * main - Ckecks for alphabets 
 *
 * Return: 1 if 'c' is an alpabet, 0 if otherwise
 */

int main(void)
{
    int r;

    r = _isalpha('H');
    _putchar(r + '0');
    r = _isalpha('o');
    _putchar(r + '0');
    r = _isalpha(108);
    _putchar(r + '0');
    r = _isalpha(';');
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}

#include "main.h"

/**
 * flip_bits - flip bits
 * @n: long
 * @m: long
 * Return:
 * int
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int xorResult = n ^ m;
	int count = 0;

	while (xorResult != 0)
    {
		count += xorResult & 1;
		xorResult >>= 1;
    }

	return (count);
}

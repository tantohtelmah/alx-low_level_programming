#include "main.h"

/**
 * clear_bit - ptints bits at index
 * @n: unsigned long int
 * @index: unsigned int
 * Return: int
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n &= ~(1UL << index);
	return (1);
}

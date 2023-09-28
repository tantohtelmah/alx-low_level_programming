#include "main.h"

/**
 * get_bit - ptints bits at index
 * @n: unsigned long int
 * @index: unsigned int
 * Return: int
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((n >> index) & 1);
}

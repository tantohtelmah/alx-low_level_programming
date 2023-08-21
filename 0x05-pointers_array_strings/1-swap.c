#include "_putchar.h"

/**
* swap_int - Updates value of in with pointer
* @a: pointer to an integer
* @b: pointer to an integer
* Return: None
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

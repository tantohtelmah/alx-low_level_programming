#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: char
 * @f:char
 * Return: None
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

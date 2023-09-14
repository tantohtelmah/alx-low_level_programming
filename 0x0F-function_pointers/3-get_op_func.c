#include "3-calc.h"
#include <stddef.h>
#include <string.h>

/**
 * get_op_func - select function
 * @s: char
 * Return: int
*/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	size_t i;

	i = 0;
	while (i < (sizeof(ops) / sizeof(ops[0])))
	{
		if (s == ops[i].op)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
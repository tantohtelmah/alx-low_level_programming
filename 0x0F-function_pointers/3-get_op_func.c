#include "3-calc.h"

/**
 * get_op_func - select function
 * @s: char
*/

int (*get_op_func(char *s))(int, int);
{
	op_t ops[] = 
	{
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;

	while (i < strlen(ops))
	{
		if (s == ops[i].op)
		{
		return (ops[i].f);
		i++;
		}
	}
	return (NULL);
}
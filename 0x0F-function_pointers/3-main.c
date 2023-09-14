#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main file
 * @argc: int
 * @argv: char
 * Return: int
*/

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	char *operator;
	int (*calc)(int, int);

	if (argc != 4)
	{
		printf("Error");
		exit(98);
	}
	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);
	calc = get_op_func(operator);
	if (calc == NULL)
	{
		printf("Error");
		exit(99);
	}
	printf("%d\n", calc(num1, num2));
	return (0);
}

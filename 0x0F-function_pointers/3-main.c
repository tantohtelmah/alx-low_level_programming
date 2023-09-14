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
	int calc;

	if (argc != 4)
	{
		printf("Error");
		return (1);
	}
	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);
	calc = (get_op_func(operator))(num1, num2);
	printf("%d\n", calc);
	return (0);
}

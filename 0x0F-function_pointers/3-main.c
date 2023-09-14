#include "3-calc.h"

/**
 * main - main file
 * @argc: int
 * @argv: char
 * 
*/

int main(int argc, char argv[])
{
	int num1;
	int num2;
	char operator;
	int calc;

	if (argc != 3)
	{
		printf("Error");
		return;
	}
	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);
	calc = get_op_func(operator)(num1, num2)
}
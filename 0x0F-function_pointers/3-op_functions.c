#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - adds intergers
 * @a: int
 * @b: int
 * Return: int
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts intergers
 * @a: int
 * @b: int
 * Return: int
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies intergers
 * @a: int
 * @b: int
 * Return: int
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides intergers
 * @a: int
 * @b: int
 * Return: int
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modules of intergers
 * @a: int
 * @b: int
 * Return: int
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error");
		exit(100);
	}
	return (a % b);
}

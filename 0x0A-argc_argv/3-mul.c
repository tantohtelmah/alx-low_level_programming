#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its name
 * @argc: integer
 * @argv: character
 * Return: integer
*/

int main(int argc, char *argv[])
{
	int mul;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	return (0);
}

#include "main.h"
#include <stdio.h>

#define UNUSED(x) (void)(x)

/**
 * main - prints its name
 * @argc: integer
 * @argv: character
 * Return: integer
*/

int main(int argc, char *argv[])
{
	printf("%d\n", argc);
	UNUSED(argv);
	return (0);
}

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
	printf("%s\n", argv[0]);
	UNUSED(argc);
	return (0);
}

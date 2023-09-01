#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define UNUSED(x) (void)(x)

/**
 * main - prints its name
 * @argc: integer
 * @argv: character
 * Return: integer
*/

int main(int argc, char *argv[])
{
	int i;
	int add = 0;
	char *end;
	int value;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			value = strtol(argv[i], &end, 10);
			if (*end != '\0')
			{
				printf("Error\n");
				return (1);
			}
			add += atoi(argv[i]);
		}
		printf("%d\n", add);
	}
	else
	{
		printf("0\n");
	}
	UNUSED(value);
	return (0);
}

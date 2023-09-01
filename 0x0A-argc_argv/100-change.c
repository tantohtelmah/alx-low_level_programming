#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - greedy algorithm
 * @argc: int
 * @argv: character
 * Return: int
*/

int main(int argc, char *argv[])
{
	int sum = 0;
	int amt;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	amt = atoi(argv[1]);
	sum = amt / 25;
	amt = amt % 25;
	sum += amt / 10;
	amt = amt % 10;
	sum += amt / 5;
	amt = amt % 5;
	sum += amt / 2;
	amt = amt % 2;
	sum += amt;
	printf("%d\n", sum);
	return (0);
}

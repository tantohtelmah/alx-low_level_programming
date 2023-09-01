#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define UNUSED(x) (void)(x)

/**
 * main - greedy algorithm
 * @argc: int
 * @argv: character
 * Return: int
*/

int main(int argc, char *argv[])
{
	int a, b, c, d, e, f, g, h, i, j, sum = 0;
    int amt = atoi(*argv);

	if (amt == 1)
    {
		printf("Error\n");
    }
	if (amt < 25)
    {
        a = amt / 25;
        b = amt % 25;
        amt = b;
        sum += a;
    }
    if (amt < 10)
    {
        c = amt / 25;
        d = amt % 25;
        amt = d;
        sum += c;
    }
    if (amt < 5)
    {
        e = amt / 25;
        f = amt % 25;
        amt = f;
        sum += e;
    }
    if (amt < 25)
    {
        g = amt / 25;
        h = amt % 25;
        amt = h;
        sum += g;
    }
    if (amt < 25)
    {
        i = amt / 25;
        j = amt % 25;
        amt = j;
        sum += i;
    }
    printf("%d\n", sum);
    UNUSED(argc);
    return (0);
}
#include "main.h"
#include <string.h>

/**
* _strncpy - copies strings
* @dest: charater
* @src: character
* @n: integer
* Return: character
*/

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; (*(src + j)) == '\0' && j < n; j++)
	{
		*(dest + j)  = *(src + j);
	}
	for ( ; j < n; j++)
	{
		*(dest + j) = '\0';
	}
	_putchar('\n');
	return (dest);
}

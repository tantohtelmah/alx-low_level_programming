#include "main.h"
#include <string.h>

/**
* _strcat - concanates strings
* @dest: charater
* @src: character
* Return: character
*/

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; (*(dest + i)) != '\0'; i++)
	;

	for (j = 0; (*(src + j)) != '\0'; j++)
	{
		*(dest + i)  = *(src + j);
		i++;
	}
	*(dest + i) = '\0';
	_putchar('\n');
	return (dest);
}

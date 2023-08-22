#include "main.h"

/**
* _strcpy - copies string to new location
* @dest: charcater
* @src: chracter
* Return: character
*/

char *_strcpy(char *dest, char *src)
{
	char *temp;

	*temp = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return *temp;
}

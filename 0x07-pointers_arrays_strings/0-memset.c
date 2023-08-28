#include "main.h"

/**
* _memset - sets / fills memory with const byte
* @s: character
* @b: character
* @n: unsigned integer
* Return: Character
*/

char *_memset(char *s, char b, unsigned int n)
{
	*(s + n) = b;
	return (s);
}

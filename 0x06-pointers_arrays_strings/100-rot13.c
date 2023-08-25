#include "main.h"

/*int is_separator(char c);*/

/**
* rot13 - converts lowercase letters to uppercase
* @s: charater
* Return: character
*/
char *rot13(char *s)
{
	int i = 0;
	int basis;

	while (*(s + i) != '\0')
	{
		/*is_separator(*(s + i));*/
		if ((*(s + i) >= 'a' && *(s + i) <= 'z') || (*(s + i) >= 'A' && *(s + i) <= 'Z'))
		{
			while (*(s + i) >= 'a' && *(s + i) <= 'z')
			{
				basis = 'a';
				*(s + i) = ((((*(s + i)) - basis) + 13) % 26) + basis;
				i++;
			}
			basis = 'A';
			*(s + i) = ((((*(s + i)) - basis) + 13) % 26) + basis;	
		}
		i++;
	}
	return (s);
}

/**
is_separator – separates
@c: character
Return: character
*

void is_separator(char c)
{
	char *seps_list = ",;.!?\"(){} \t\n";
	int x = 0;

	while (*(seps_list + x) != '\0')
	{
		if (c == *(seps_list + x))
			continue;
		x++;
	}
}
*/


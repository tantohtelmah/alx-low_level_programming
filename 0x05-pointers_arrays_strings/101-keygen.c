#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

/**
* main - password generate
* Return: always zero
*/

int main(void)
{
	char password[PASSWORD_LENGTH + 1];
	int index;
	int i;
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

	srand(time(NULL));
	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		index = rand() % (sizeof(charset) - 1);
		password[i] = charset[index];
	}
	password[PASSWORD_LENGTH] = '\0';
	printf("Generated password: %s\n", password);
	return (0);
}

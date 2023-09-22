#include <stdio.h>

/**
 * apres - before main function
*/

void __attribute__((constructor)) apres()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}


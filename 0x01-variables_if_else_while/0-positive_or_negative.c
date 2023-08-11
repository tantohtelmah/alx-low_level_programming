#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* betty style doc for function main goes there
*
* main - prints random numbers and check if it is positive
* Return: Always Zero
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0){
		printf("%d is positive\n",&n);
	}else if(n==0){
		printf("%d is zero\n",&n);
	}else 
		printf("%d is negative\n",&n);

	return (0);
}

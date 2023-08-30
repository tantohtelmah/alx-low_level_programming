#include "main.h"

int is_prime_helper(int n, int i);

/**
 * is_prime_number - prime numbers
 * @n: integer
 * Return: None
*/
int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}
/**
 * is_prime_helper - prime numbers
 * @n: integer
 * @i: integer
 * Return: None
*/

int is_prime_helper(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (is_prime_helper(n, i + 1));
	i++;
}

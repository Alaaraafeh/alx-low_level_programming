#include "main.h"

/**
 * factorial - Returns the factorial of an integer
 * @n: an integer than need factorial
 * Return: the factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	n = n * factorial(n - 1);
	return (n);
}

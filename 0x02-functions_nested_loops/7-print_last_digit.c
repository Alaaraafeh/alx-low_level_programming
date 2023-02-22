#include "main.h"

/**
 * print_last_digit - check the code
 * @n: parameter
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	int x;

	x = n % 10;
	if (n < 0)
		n *= -1;
	
	_putchar(x + '0');
	return (x);
}

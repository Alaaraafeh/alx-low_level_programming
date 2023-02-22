#include "main.h"

/**
 * print_last_digit - check the code
 * @n: parameter
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	int x;

	if (x < 0)
		x *= (-1);
	x = n % 10;
	_putchar(x + '0');
	return (x);
}

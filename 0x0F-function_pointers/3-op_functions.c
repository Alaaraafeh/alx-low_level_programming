#include "3-calc.h"

/**
 * op_add - calculates the sum of two integers,
 * @a: first integer.
 * @b: second integer.
 *
 * Return: int
 */
int op_add(int a, int b)
{
	int res;

	res = a + b;
	return (res);
}

/**
 * op_sub - calculates the difference of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: int
 */
int op_sub(int a, int b)
{
	int res;

	res = a - b;
	return (res);
}

/**
 * op_mul - calculates the product of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: int
 */
int op_mul(int a, int b)
{
	int res;

	res = a * b;
	return (res);
}

/**
 * op_div - calculates the division of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: int
 */
int op_div(int a, int b)
{
	int res;

	res = a / b;
	return (res);
}

/**
 * op_mod - calculates the remainder of the division of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: int
 */
int op_mod(int a, int b)
{
	int res;

	res = a % b;
	return (res);
}
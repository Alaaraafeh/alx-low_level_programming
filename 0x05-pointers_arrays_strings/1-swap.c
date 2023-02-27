#include "main.h"

/**
 * swap_int - check the code
 * @a: parameter 1
 * @b: parameter 2
 * return: always 0.
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}

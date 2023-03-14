#include "main.h"
#include <stdlib.h>

/**
 * *create_array -  function that creates an array of assign char.
 *
 * @size: size of the array
 * @c: char to assign
 *
 * Return: pointer to array, NULL if fail.
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
		p[i] = c;

	return (p);

	if (p == NULL || size == 0)
		return ("failed to allocate memory");
}

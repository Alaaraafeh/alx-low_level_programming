#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iteration - function that executes a function
 * @array : array of intgers
 * @size : datatype size_t
 * @action : function pointer return nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}

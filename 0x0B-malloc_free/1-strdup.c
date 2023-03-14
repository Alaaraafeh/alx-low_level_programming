#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicate to new memory space location
 *
 * @str: string parameter
 *
 * Return: NULL if str = NULL
 * on success returns a pointer
 */
char *_strdup(char *str)
{
	char *p;

	if (str == NULL)
		return (NULL);
	if (p == NULL)
		return (NULL);

	p = malloc(sizeof(str));
	*p = str;
	return (*p);
}

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
	int i;
	int j;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] "\n")
		i++;

	p = malloc(sizeof(char) * i);
	p = str;
	return (p);
	free(p);
}

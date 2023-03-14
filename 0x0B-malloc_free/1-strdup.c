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
	if (p == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	p = malloc(sizeof(char) * (i + 1));

	for (j = 0; j <= i; j++)
		p[j] = str[j];

	return (p);
}

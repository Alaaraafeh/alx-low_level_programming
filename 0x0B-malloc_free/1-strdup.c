#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup: function that returns a
 * pointer to a newly allocated space in memory
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

	p = malloc(sizeof(str));
	p = str;
	return (p);
}

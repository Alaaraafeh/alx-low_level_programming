#include "main.h"

/**
 * _strlen - check the code
 * @s: parameter
 * Return: always 0.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * *@s: parameter
 * Return: the lenth of the string
 */

int _strlen_recursion(char *s)
{
	int cont = 0;

	if (*s)
	{
		cont++;
		cont = cont + _strlen_recursion(s + 1);
	}
	return (cont);
}

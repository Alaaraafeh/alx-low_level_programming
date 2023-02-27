#include "main.h"

/**
 * _puts - check the code
 * @str: function parameter
 * return: always 0.
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		_putchar(str[i++]);
	_putchar('\n');
}

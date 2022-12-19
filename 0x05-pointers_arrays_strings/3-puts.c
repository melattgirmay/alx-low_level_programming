#include "main.h"
/**
 * _puts - prints a string followed by a new line
 * @str: the string to print
 *
 */
void _puts(char *str)
{
	int in;

	for (in = 0; str[in] != '\0'; in++)
	{
		_putchar(str[in]);
	}
	_putchar('\n');
}

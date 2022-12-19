#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: input string
 * Return: length of the string
 */
int _strlen(char *s)
{
	int in;

	for (in = 0; s[in] != '\0' ; in++)
		;
		return (in);
}

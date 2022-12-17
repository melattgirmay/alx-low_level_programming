#include "main.h"
#include <stdio.h>

/**
 * _abs - computes the absolute value of an integer
 * @c: the integer to be computed
 *
 * Return: absolute value of the integer
 */

int _abs(int c)
{

	if (c >= 0)
		return (c);
	else
		return (-c);
}

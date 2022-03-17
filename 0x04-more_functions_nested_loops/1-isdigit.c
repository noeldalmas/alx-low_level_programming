#include "main.h"
#include <stdio.h>

/**
 * _isdigit - check for uppercase character
 * @c: digit to be checked
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include "main.h"

/**
 * _islower - check for a lowercase character
 *
 * @c: character to check
 *
 * Return: 1 for lowercase and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

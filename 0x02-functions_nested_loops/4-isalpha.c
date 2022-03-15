#include "main.h"

/**
 * _isalpha - check for a lowercase character
 *
 * @c: character to check
 *
 * Return: 1 for lowercase and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' || c >= 'A') && (c <= 'z' || c <= 'A'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

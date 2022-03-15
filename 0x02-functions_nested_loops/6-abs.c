#include "main.h"

/**
 * _abs - compute the absolute value of an integer
 *
 * @i: number to be checked
 *
 * Return: Always 0
 */
int _abs(int i)
{
	if (i > 0)
	{
		return (i);
	}
	else if (i < 0)
	{
		return (-i);
	}
	return (0);
}

#include "main.h"

/**
 * _pow_recursion - compute power
 * @x: number to compute
 * @y: number to raise x to
 * Return: power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

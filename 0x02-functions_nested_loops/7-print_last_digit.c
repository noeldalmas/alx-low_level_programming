#include "main.h"

/**
 * print_last_digit - print the last digit
 *
 * @x: number to be checked
 *
 * Return: return the last digit
 */
int print_last_digit(int x)
{
	if (x < 0)
	{
		x *= -1;
	}
	_putchar((x % 10) + '0');
	return (x % 10);
}

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
	int last;

	if (x < 0)
	{
		x *= -1;
	}
	last = x % 10;
	_putchar(last + '0');
	return (last);
}

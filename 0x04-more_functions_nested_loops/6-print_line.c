#include "main.h"

/**
 * print_line - prints a straight line
 * @n: number of underscores
 */
void print_line(int n)
{
	char i;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
		_putchar('_');
	}
	_putchar('\n');
}

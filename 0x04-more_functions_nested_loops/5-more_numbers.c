#include "main.h"

/**
 * more_numbers - print 10 times numbers 1 to 14
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(j + '0');
		}
		if (j >= 10)
		{
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
	}
}

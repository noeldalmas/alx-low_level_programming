#include "main.h"

/**
 * jack_bauer - print every minute of the day
 *
 * Return: Always 0
 */
void jack_bauer(void)
{
	int hour;
	int min;

	for (hour = 00; hour <= 23; hour++)
	{
		for (min = 00; min <= 59; min++)
		{
			_putchar(hour + ':');
			return (hour);
			_putchar(min + '0');
			return (min);
		}
	}
}

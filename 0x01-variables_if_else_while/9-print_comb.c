#include <stdio.h>

/**
 * main - Function to print all possible combinations of single digits
 *
 * Return: 0 always (success)
 */
int main(void)
{
	int ones;
	int tens;

	for (ones = 0; ones <= 9; ones++)
	{
		for (tens = 0; tens <= 9; tens++)
		{
			putchar (ones + '0');
			putchar (tens + '0');

			if (!(ones == 9 && tens == 9))
			{
				putchar (',');
			}
		}
	}
	putchar ('\n');
	return (0);
}

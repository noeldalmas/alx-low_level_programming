
#include <stdio.h>

/**
 * main - Function to print all possible combinations of two digits
 *
 * Return: 0 always (success)
 */
int main(void)
{
	int first;
	int second;

	for (first = 0; first <= 9; first++)
	{
		for (second = first + 1; second <= 9; second++)
		{
			putchar (first + '0');
			putchar (second + '0');

			if (first < 8)
			{
				putchar (',');
				putchar (' ');
			}
		}
	}
	putchar ('\n');
	return (0);
}

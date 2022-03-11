#include <stdio.h>

/**
 * main - Function to print all possible combinations of single digits
 *
 * Return: 0 always (success)
 */
int main(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		putchar (digit + '0');
		if (!(digit == 9))
		{
			putchar (',');
			putchar (' ');
		}
	}
	putchar ('\n');
	return (0);
}

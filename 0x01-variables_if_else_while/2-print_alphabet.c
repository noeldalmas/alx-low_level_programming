#include <stdio.h>

/**
 * main - Main function
 *
 * Return: 0 since the main functiontakes no argument
 */
int main(void)
{
	int i;
	for (i = 'a'; i <= 'z'; i++);
	{
		putchar(i);
		putchar('\n');
	}
	return (0);
}

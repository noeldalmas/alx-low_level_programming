#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: string to print
 */
void print_rev(char *s)
{
	int len = 0;
	int j, k;
	char *begin, *end, ch;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	begin = s;
	end = s;
	for (j = 0; j < len - 1; j++)
		end++;
	for (j = 0; j < len / 2; j++)
	{
		ch = *end;
		*end = *begin;
		*begin = ch;

		_putchar(*end);
		_putchar(*begin);
		begin++;
		end++;
	}
	_putchar('\n');
}

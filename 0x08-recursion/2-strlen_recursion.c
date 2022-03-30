#include "main.h"

/**
 * _strlen_recursion - return length of string
 * @s: string to use
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\n')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

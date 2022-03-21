#include "main.h"

/**
 * _strlen - print string length
 * @s: pointer to string
 * Return: the length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

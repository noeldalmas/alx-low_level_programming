#include "main.h"
#include <string.h>

/**
 * _strlen(char *s)
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

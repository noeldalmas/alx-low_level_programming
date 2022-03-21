#include "main.h"

/**
 * swap_int - swap values of 2 integers
 * @a: pointer to int 1
 * @b: pointer to int 2
 */
void swap_int(int *a, int *b)
{
	int i = *a;
	int j = *b;
	*b = &i;
	*a = &j;
}

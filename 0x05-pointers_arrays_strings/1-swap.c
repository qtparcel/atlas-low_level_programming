#include "main.h"
#include <stddef.h>

/**
 * swap_int - swaps value of two ints
 * @a: int pointer 1
 * @b: int pointer 2
 * Return: void
 */
void swap_int(int *a, int *b)
{

	int c = *a;

	*a = *b;
	*b = c;

}

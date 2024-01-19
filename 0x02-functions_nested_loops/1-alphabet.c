#include "main.h"

/**
 * print_alphabet- prints the alphabet
 *
 * Return: int
 */
int print_alphabet(void)
{
	uint8_t i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}

	_putchar('\n');

	return (0);
}


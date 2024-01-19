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

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	uint8_t i;

	for (i = 0; i < 10; i++)
	{
		print_alphabet();
	}
}

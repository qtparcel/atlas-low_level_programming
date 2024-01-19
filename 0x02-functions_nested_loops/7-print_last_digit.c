#include "main.h"

/**
 * print_last_digit - prints last digit of n
 *
 * @n: input num
 *
 * Return: int
 */
int print_last_digit(int n)
{
	int last = n % 10;

	if (n < 0)
	{
		last = (n * -1) % 10;
	}

	_putchar(last + '0');
	return (last);
}


#include "main.h"

/**
 * print_sign - prints sign of a number
 *
 * @n: input num
 *
 * Return: int
 */
int print_sign(int n)
{
	return ((n < 0) ? __putchar("-") : (n > 0) ? __putchar("+") : __putchar("0"));
}

/**
 * __putchar - prints input character
 *
 * @c: input character
 *
 * Return: -1, 0, 1
 */
int __putchar(char *c)
{

	_putchar(*c);

	return (*c == '-' ? -1 : *c == '+' ? 1 : 0);
}

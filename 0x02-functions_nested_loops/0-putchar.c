#include "main.h"

/**
 * print_putchar - prints '_putchar'
 *
 * Return: int
 */
int print_putchar(void)
{
	int i = -1;
	char str[10] = "_putchar\n";

	while (str[++i])
	{
		_putchar(str[i]);
	}

	return (0);

}

/**
 * main - entry point
 *
 * Return: int
 */
int main(void)
{
	print_putchar();
	return (0);
}

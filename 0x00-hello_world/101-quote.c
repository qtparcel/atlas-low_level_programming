#include <stdio.h>

/**
 * main - entry point
 *
 * Return: int
 */
int main(void)
{
	int i;
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	for (i = 0; str[i]; i++)
		putchar(str[i]);

	return (1);
}

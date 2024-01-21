#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: string
 * Return: void
 */
int _strlen(char *s)
{
	int i = -1;

	while (s[++i])
		;

	return (i);
}

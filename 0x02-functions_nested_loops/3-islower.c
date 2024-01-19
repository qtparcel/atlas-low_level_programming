#include "main.h"
/**
 * _islower - checks for lowercase character
 *
 * @c: input character
 *
 * Return: void
 */
int _islower(int c)
{
	return ((c >= 'a' && c <= 'z') ? 1 : 0);
}

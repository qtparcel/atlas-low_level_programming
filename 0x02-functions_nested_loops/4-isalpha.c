#include "main.h"
/**
 * _isalpha- checks for alphabetic character
 *
 * @c: input character
 *
 * Return: int
 */
int _isalpha(int c)
{
	return ((c >= 'A' && c <= 'z') ? 1 : 0);
}

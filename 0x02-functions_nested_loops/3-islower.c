#include "main.h"

/**
 * _slower - check if char is lowercase
 * @c: is the char to be checked
 * return: 1 if char is lowercase, otherwise 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

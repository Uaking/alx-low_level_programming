#include "main.h"

/**
 * _islower - prints a comparism
 * Return: 1 if sucessful, 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

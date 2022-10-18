#include <main.h>

/**
 * _isalpha - checks if its a letter
 * Return: 1 if a letter, 0 if otherwise
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

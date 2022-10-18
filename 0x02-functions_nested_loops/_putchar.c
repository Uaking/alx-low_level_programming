#include <stdio.h>
#include <unistd.h>
/**
 * _putchar - writes a character
 * Return: sucessful
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

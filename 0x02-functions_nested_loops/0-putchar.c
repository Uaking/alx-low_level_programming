#include "main.h"

/**
 * main - prints sometjkng
 * Return: 0 if sucessful
 */

int main(void)
{
	char h[] = "_putchar";
	int s = sizeof(h);
	int i;

	for (i = 0; i <= s; i++)
	{
		_putchar(h[i]);
	}
	_putchar('\n');
	return (0);
}

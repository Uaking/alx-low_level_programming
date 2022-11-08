#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_array - array to be created
 * @size: size of int
 * @c: char
 * @ptr: return
 * Return: ptr
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	ptr = malloc(size * sizeof(c));
	if (size == 0)
	{
		return (NULL);
	}
	else if (size < 0)
	{
		return (NULL);
	}
	else
	{
		return (ptr);
	}
}

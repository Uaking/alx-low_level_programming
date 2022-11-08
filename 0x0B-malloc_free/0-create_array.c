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

char *create_array(unsigned int size, char c);
{
	int *ptr;
	ptr = (int *)malloc(size * sizeof(c));
	return (ptr);
}

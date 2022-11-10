#include <stdlib.h>
#include <main.h>

/**
 * malloc_checked - our main file
 * @b: our int dile
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	if (b == NULL)
		return (98);

	else
	{
		b = malloc (sizeof(b));
		ptr = &b;
	}

	return (ptr);
}

	



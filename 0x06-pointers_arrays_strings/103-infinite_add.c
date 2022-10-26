#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i;
	i = 0;
	int n11 = atoi (n1);
	int n22 = atoi (n2);
	int a = n11 + n22;
	
	sprintf(r, "%d", a);
	
	while(r[i] != '\0')
	{
		i++;
	}
	
	if ( i >= size_r)
	{
		return (0);
	}
	else if (i < size_r)
	{
		return (r);
	}
}

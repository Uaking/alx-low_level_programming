#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i;
	i = 0;
	unsigned long long int n11 = strtoull (n1, NULL, 10);
	unsigned long long int n22 = strtoull (n2, NULL, 10);
	unsigned long long int a = n11 + n22;
		
	sprintf(r, "%llu", a);
	
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

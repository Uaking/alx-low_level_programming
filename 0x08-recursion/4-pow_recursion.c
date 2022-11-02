#include "main.h"
#include <math.h>
#include <stdio.h>

/**
 *_pow_recursion - prints a recursion
 *@x: first integer
 *@y: second integer
 *Return: the integer
 */
 
 int _pow_recursion(int x, int y)
 {
   if (y < 0)
   {
     return (-1);
   }
   else
   {
     return (pow (x, y));
   }
 }
 
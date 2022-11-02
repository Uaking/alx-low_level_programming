#include "main.h"
#include <stdio.h>

/**
 *_pow_recursion - prints a recursion
 *@x: first integer
 *@y: second integer
 *Return: the integer
 */
 
 int _pow_recursion(int x, int y)
 {
   long double result = 1.0;
   
   if (y < 0)
   {
     return (-1);
   }
   else
   {
     while (y != 0)
     {
       result *= x;
       --y;
     }
     return (result);
   }
 }
 
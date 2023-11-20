#include <stdio.h>
#include "main.h"
/**
 * _abs - Compute the absolute value of an integer
 * @n: The integer to compute the absolute value
 *
 * Return: n if n >= 0 and n*(-1) otherwise
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * (-1));
	}
	else
	{
		return (n);
	}
}

#include <stdio.h>
#include "main.h"
/**
 * print_array - Prints n elements of an array of integers
 * @a: The array
 * @n: The number of element of the array to be printed
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != 0)
		{
			putchar(',');
			putchar(' ');
		}
		printf("%d", a[i]);
	}
	putchar('\n');
}

#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - This function prints the alphabet in lowercase
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
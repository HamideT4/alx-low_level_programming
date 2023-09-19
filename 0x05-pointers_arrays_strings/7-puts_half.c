#include <stdio.h>
#include "main.h"
/**
 * puts_half - Prints half of a string
 * @str: The string
 */
void puts_half(char *str)
{
	int i;
	int length = 0;

	while (str[length] != '\0')
		length++;
	for (i = (length - 1) / 2 + 1; i < length; i++)
		_putchar(str[i]);
	_putchar('\n');
}

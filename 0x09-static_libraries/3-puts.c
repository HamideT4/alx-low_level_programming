#include <stdio.h>
#include "main.h"
/**
 * _puts - Prints a string
 * @str: The string printed
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}

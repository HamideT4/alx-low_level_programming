#include <stdio.h>
#include "main.h"
/**
 * main - function prints _putchar
 *
 * Return: 0
 */
int main(void)
{
	char carac[8] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		putchar(carac[i]);
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 * main - Print the lowercase alphabet in reverse
 *
 * Return: 0
 */
int main(void)
{
	char letter;

	for (letter = '122'; letter >= '97'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}

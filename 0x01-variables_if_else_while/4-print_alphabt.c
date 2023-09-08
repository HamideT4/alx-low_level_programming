#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 *
 * Return: 0
 */
int main(void)
{
	char alphabet[24] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 24; i++)
	{
		putchar(alphabet[i]);
	}
	putchar('\n');
	return (0);
}

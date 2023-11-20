#include <stdio.h>
/**
 * main - function that prints its name
 * @argc: number of arguments
 * @argv: array of arguments value
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

#include <stdio.h>
#include "main.h"
/**
 * _strcat - Concatenates two strings
 * @dest: The initial string
 * @src: The string to add to the initial string
 *
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *init = dest;

	while (*init != '\0')
	{
		init++;
	}
	while (*src != '\0')
	{
		*init = *src;
		init++;
		src++;
	}
	*init = '\0';
	return (dest);
}

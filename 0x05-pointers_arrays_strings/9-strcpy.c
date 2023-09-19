#include <stdio.h>
#include "main.h"
/**
 * _strcpy - Copies the string pointed to by src to the buffer
 * pointed to by dest
 * @dest: The pointer to the buffer
 * @src: The pointer to the string
 *
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}

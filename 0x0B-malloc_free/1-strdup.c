#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - a function that returns a pointer to a newly allocated space
 * in memeory
 *
 * @str: the given string
 *
 * Return: NULL if str = NULL, a pointer to the allpcated space on success
 */

char *_strdup(char *str)
{
	char *duplicate;
	int i, size;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		size++;

	duplicate = malloc(sizeof(char) * (size + 1));
	if (duplicate == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		duplicate[i] = str[i];

	duplicate[size] = '\0';
	return (duplicate);
}

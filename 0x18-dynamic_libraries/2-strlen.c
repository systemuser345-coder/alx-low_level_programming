#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: a pointer to char
 *
 * Return: number of char
 */

int _strlen(char *s)
{
	int i;
	int count;

	count = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		count += 1;
	}

	return (count);
}

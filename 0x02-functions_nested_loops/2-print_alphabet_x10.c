#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets in ten lines
 */

void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}

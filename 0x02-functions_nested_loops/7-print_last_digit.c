#include "main.h"

/**
 * print_last_digit - print last digit of integer
 * @n: integer argument
 * Return: last digit of number
 */

int print_last_digit(int n)
{
	int ret;

	if (n < 0)
		n *= -1;
	ret = _putchar('0' + (n % 10));
	return (ret);
}

#include "main.h"
#include <math.h>
#include <stdlib.h>

/**
 * print_last_digit - Prints the last digit of a number.
 * Description: main fun
 * @n: hehe
 * Return: 0
 */
int print_last_digit(int n)
{
	int last_digit = abs(n % 10);

	_putchar(last_digit + '0');

	return last_digit;
}

#include "main.h"
/**
 * print_last_digit - main fun
 * Description: main fun
 * @n: hehe
 * Return: 0
 */
int print_last_digit(int n)
{
	_putchar(_abs(n) % 10 + '0');
	return (_abs(n) % 10);
}

#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_to_98 - hehe
 * Description: main fun
 * @n: hehe
 * Return: 0
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		for (; n >= 98; n--)
		{
			printf("%d, ", n);
		}

	}
	else
	{
		for (; n <= 98; ++n)
		{
			printf("%d, ", n);
		}
	}
	printf("\n");
}

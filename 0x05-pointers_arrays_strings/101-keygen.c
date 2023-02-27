#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 6

/**
 * main - Generates a random valid password for the program 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
	char password[PASSWORD_LENGTH + 1];
	const char charset[] = "abcdefghijklmnopqrstuvwxyz
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ
		"0123456789";
	const size_t charset_size = sizeof(charset) - 1;

	srand(time(NULL));

	for (int i = 0; i < PASSWORD_LENGTH; i++)
	{
		password[i] = charset[rand() % charset_size];
	}
	password[PASSWORD_LENGTH] = '\0';

	printf("%s", password);

	return (0);
}

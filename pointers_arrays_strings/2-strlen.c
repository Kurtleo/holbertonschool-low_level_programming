#include "main.h"

/**
 * _strlen - write a function that returns the length of a string.
 *@s: the length of the string
 *
 * Return: Always 0 (Success)
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}

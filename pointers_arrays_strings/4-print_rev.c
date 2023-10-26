#include "main.h"

/**
 * print_rev - Write a function that prints a string in
 * reverse followed by a new line.
 * @s: Prints a string
 *
 * Return (0)
 */
void print_rev(char *s)
{
	int i = _strlen(s) - 1;

	while (i >= 0)
	{
	
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
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
